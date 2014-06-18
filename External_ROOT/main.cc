
#include <iostream>
#include <vector>

#include "TH1F.h"
#include "fastjet/PseudoJet.hh"
#include "fastjet/ClusterSequence.hh"

using namespace std;

int main (int argc, char *argv[]) {
  TH1F h("an_histogram", "", 10, 0, 1);
  std::cout<<h.GetName()<<" created."<<std::endl;

  fastjet::Strategy strategy = fastjet::Best;
  fastjet::RecombinationScheme recomb_scheme = fastjet::E_scheme;
  double rparam = 0.5;
  fastjet::JetDefinition jet_def(fastjet::antikt_algorithm, rparam,
				 recomb_scheme, strategy);

  vector<fastjet::PseudoJet> input_particles;
  input_particles.push_back( fastjet::PseudoJet(10,0,0,10) );
  input_particles.push_back( fastjet::PseudoJet(-10,0,0,10) );
  fastjet::ClusterSequence clust_seq(input_particles, jet_def);
  double ptmin = 0.5;
  vector<fastjet::PseudoJet> jets = clust_seq.inclusive_jets(ptmin);
  cout<<"jets:"<<endl;
  for(unsigned i=0; i<jets.size(); ++i) {
    cout<<"\t"<<jets[i].pt()<<" "<<jets[i].eta()<<" "<<jets[i].phi()<<endl;
  }
}
