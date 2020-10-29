
class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
       
        Student(string firstName, string lastName, int id, vector<int> scores):Person(firstName, lastName, id){

            // copying vector scores into testScores   
            testScores = scores;
        }

        char calculate(){

            int sum = 0;
            char res;
            int size = testScores.size();

            for(int i = 0; i < size; i++){
                sum = sum + testScores[i];
            }

            float avg = (float)sum / size;

            if(avg >= 90 && avg <= 100)
                res = 'O';
            else if(avg >= 80 && avg < 90)
                res = 'E';
            else if(avg >= 70 && avg < 80)
                res = 'A';
            else if(avg >= 55 && avg < 70)
                res = 'P';
            else if(avg >= 40 && avg < 55)
                res = 'D';
            else if(avg < 40)
                res = 'T';

            return res;

        }
        
};
