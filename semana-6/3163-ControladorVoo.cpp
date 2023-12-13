// Para isso, basta seguir o seguinte protocolo, os aviões que veem do lado Oeste da pista têm maior prioridade de serem colocados na fila

#include <bits/stdc++.h>

using namespace std;

int main()
{
	queue<int> leste;
	queue<int> oeste;
	queue<int> norte;
	queue<int> sul;
	
	int num, n;
	string strNum;
	
	cin >> num;
	
	while(num != 0){
		if(num == -1){
			do 
			{
				cin >> strNum;
				if (!(strNum[0] == '-' || strNum == "0"))
					strNum = strNum.substr(1);
				n = stoi(strNum);
				if(n > 0)
					oeste.push(n);
						
			} while(n > 0);
		}
		if(num == -2){
			do 
			{
				cin >> strNum;
				if (!(strNum[0] == '-' || strNum == "0"))
					strNum = strNum.substr(1);
				n = stoi(strNum);
				if(n > 0)
					sul.push(n);
				
			} while(n > 0);
		}
		if(num == -3){
			do 
			{
				cin >> strNum;
				if (!(strNum[0] == '-' || strNum == "0"))
					strNum = strNum.substr(1);
				n = stoi(strNum);
				if(n > 0)
					norte.push(n);
				
			} while(n > 0);
		}
		if(num == -4){
			do 
			{
				cin >> strNum;
				if (!(strNum[0] == '-' || strNum == "0"))
					strNum = strNum.substr(1);
				n = stoi(strNum);
				if(n > 0)
					leste.push(n);
				
			} while(n > 0);
		}
		
		num = n;
	}
	
	while (oeste.size() > 0 || norte.size() > 0 || sul.size() > 0 || leste.size() > 0) {
		if(oeste.size() > 0) {
			cout << "A" << oeste.front() << " ";
			oeste.pop();
		}
		
		if(norte.size() > 0) {
			cout << "A" << norte.front() << " ";
			norte.pop();
		}
		
		if(sul.size() > 0) {
			cout << "A" << sul.front() << " ";
			sul.pop();
		}
		
		if(leste.size() > 0) {
			cout << "A" << leste.front() << " ";
			leste.pop();
		}
	}
	
	return 0;
}