#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	cin>>str;
    std::vector<int> vect;
    std::vector<int> aray(10,0);
    std::vector<int> prefix(10,0);
    std::stringstream ss(str);
    int i,a,b,c,d,e,f,g,h;
    int monDays[12] = {21,28,31,30,31,30,31,31,30,31,30,31};
    int mon = -1,dat = -1,hr =  -1,minute = -1;

    while (ss >> i)
    {
        vect.push_back(i);
        aray[i]++;
        if (ss.peek() == ',')
            ss.ignore();
    }

    prefix[0] = aray[0];
    for (int i = 1; i < 10; ++i)
    	prefix[i]=prefix[i-1]+aray[i];

    if(prefix[6]<4 || prefix[3]<3 || prefix[2]<2 || prefix[1]< 1){
    	cout<<"0";
    	return 0;
    }

    for (int i = 12; i > 0 ; i--)
    {
    	a = i/10;
    	b = i%10;
    	if((a==b && aray[a]>1) || (a!=b && aray[a]>0 && aray[b]>0) ){
    		mon = i;
    		aray[a]--;
    		aray[b]--;
		    for (int j = monDays[mon-1]; j > 0; j--){
		    	c = j/10;
		    	d = j%10;
		    	if((c==d && aray[c]>1) || (c!=d && aray[c]>0 && aray[d]>0) ){
		    		dat = j;
		    		aray[c]--;
		    		aray[d]--;
				    for (int k = 23; k >= 0; k--){
				    	e = k/10;
				    	f = k%10;
				    	if((e==f && aray[e]>1) || (e!=f && aray[e]>0 && aray[f]>0) ){
				    		hr = k;
				    		aray[e]--;
				    		aray[f]--;
						    for (int l = 59; l >= 0; l--){
						    	g = l/10;
						    	h = l%10;
						    	if((g==h && aray[g]>1) || (g!=h && aray[g]>0 && aray[h]>0) ){
						    		minute = l;
						    		aray[g]--;
						    		aray[h]--;
						    		break;
						    	}
						    }
						    if(minute == -1){
					    		hr = -1;
					    		aray[e]++;
					    		aray[f]++;
					    		continue;
						    }
				    		break;
				    	}
				    }
				    if(hr == -1){
			    		dat = -1;
			    		aray[c]++;
			    		aray[d]++;
			    		continue;
				    }
		    		break;
		    	}
		    }
		    if(dat == -1){
	    		mon = -1;
	    		aray[a]++;
	    		aray[b]++;
	    		continue;
		    }
    		break;
    	}
    }

    if(mon < 10) cout<<"0";
	    cout<<mon<<"/";

    if(dat<10) cout<<"0";
    	cout<<dat<<" ";

    if(hr<10) cout<<"0";
    	cout<<hr<<":";

    if(minute<10) cout<<"0";
    	cout<<minute;
	return 0;
}