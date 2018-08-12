//This is The Coding Area
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,b,c;
  unsigned int k;
	cin>>n;
	char a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}

	i=0,j=0;


	while(a[i][j]!='D')
	{	  
		vector<char> ch;
		int flag=0;
		if(i-1>=0 && i-1<n && j-1>=0 && j-1<n)
			if(a[i-1][j-1]=='R')
			{
				b=i-1;
				c=j-1;

			}
			else
			{
				if(a[i-1][j-1]=='L'||a[i-1][j-1]=='S'||a[i-1][j-1]=='T'||a[i-1][j-1]=='W')
					ch.push_back(a[i-1][j-1]);

				if(a[i-1][j-1]=='D')
					flag=1;
			}

			if(i-1>=0 && i-1<n && j>=0 && j<n)
				if(a[i-1][j]=='R')
				{
					b=i-1;
					c=j;

				}
				else
				{
					if(a[i-1][j]=='L'||a[i-1][j]=='S'||a[i-1][j]=='T'||a[i-1][j]=='W')
						ch.push_back(a[i-1][j]);

					if(a[i-1][j]=='D')
						flag = 1;
				}


				if(i-1>=0 && i-1<n && j+1>=0 && j+1<n)
					if(a[i-1][j+1]=='R')
					{
						b=i-1;
						c=j+1;

					}
					else
					{
						if(a[i-1][j+1]=='L'||a[i-1][j+1]=='S'||a[i-1][j+1]=='T'||a[i-1][j+1]=='W')
							ch.push_back(a[i-1][j+1]);

						if(a[i-1][j+1]=='D')
							flag = 1;
					}


					if(i>=0 && i<n && j-1>=0 && j-1<n)
						if(a[i][j-1]=='R')
						{
							b=i;
							c=j-1;

						}
						else
						{
							if(a[i][j-1]=='L'||a[i][j-1]=='S'||a[i][j-1]=='T'||a[i][j-1]=='W')
								ch.push_back(a[i][j-1]);

							if(a[i][j-1]=='D')
								flag = 1;
						}


						if(i>=0 && i<n && j+1>=0 && j+1<n)
							if(a[i][j+1]=='R')
							{
								b=i;
								c=j+1;

							}
							else
							{
								if(a[i][j+1]=='L'||a[i][j+1]=='S'||a[i][j+1]=='T'||a[i][j+1]=='W')
									ch.push_back(a[i][j+1]);

								if(a[i][j+1]=='D')
									flag = 1;
							}


							if(i+1>=0 && i+1<n && j-1>=0 && j-1<n)
								if(a[i+1][j-1]=='R')
								{
									b=i+1;
									c=j-1;

								}
								else
								{
									if(a[i+1][j-1]=='L'||a[i+1][j-1]=='S'||a[i+1][j-1]=='T'||a[i+1][j-1]=='W')
										ch.push_back(a[i+1][j-1]);

									if(a[i-1][j-1]=='D')
										flag = 1;
								}


								if(i+1>=0 && i+1<n && j>=0 && j<n)
									if(a[i+1][j]=='R')
									{
										b=i+1;
										c=j;

									}
									else
									{
										if(a[i+1][j]=='L'||a[i+1][j]=='S'||a[i+1][j]=='T'||a[i+1][j]=='W')
											ch.push_back(a[i+1][j]);
										if(a[i+1][j]=='D')
											flag = 1;
									}    

									if(i+1>=0 && i+1<n && j+1>=0 && j+1<n)
										if(a[i+1][j+1]=='R')
										{
											b=i+1;
											c=j+1;

										}
										else
										{
											if(a[i+1][j+1]=='L'||a[i+1][j+1]=='S'||a[i+1][j+1]=='T'||a[i+1][j+1]=='W')
												ch.push_back(a[i+1][j+1]);

											if(a[i+1][j+1]=='D')
												flag = 1;
										}



										sort(ch.begin(),ch.end());

										if(a[i][j] != 'A')
										{
                                            if(ch.size()==0)
                                              cout<<"NO HURDLES";
											for(k=0;k<ch.size();k++)
											{
												cout<<ch[k]<<" ";
											}
											cout<<endl;
										}
										a[i][j]='Z';
										i=b;
										j=c;
   // cout<<"i"<<i<<"j"<<j<<endl;
										if(flag == 1){
											cout<<"DESTINATION";
											break;
										}
									}
								}