//Given two strings with names and integer for the time, make a schedule for interviewer and candidates.
#include <bits/stdc++.h>
using namespace std;
 class Interview{
  private:
  map<int,string>interview_appointments;
   
  public:
  Interview(){
      interview_appointments;
  }
  
  void interview_schedule(){
      int number_of_interviews;
      cout<<"How many interviews do you want to do?";
      cin>>number_of_interviews;
      while(interview_appointments.size()<number_of_interviews){
      string interviewer;
      string candidate;
      string candidate_and_interviewer;
      int time_of_interview;
      cout<<"What is the name of the interviewer? ";
      cin>>interviewer;
      cout<<"What is the name of the candidate? ";
      cin>>candidate;
      cout<<"What is the time of the interview? ";
      cin>>time_of_interview;
      candidate_and_interviewer=interviewer+" and "+ candidate;
      interview_appointments.insert({time_of_interview,candidate_and_interviewer});
      interviewer.clear();
      candidate.clear();
      candidate_and_interviewer.clear();
      time_of_interview=0;}
      for(auto i:interview_appointments){
         cout<<i.first<<":"<<i.second<<"\n";
      }
      
  }
     
     
     
 };
 
 int main(){
     Interview interview_1;
     interview_1.interview_schedule();
     
 }
