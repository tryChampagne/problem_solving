void deleteLargestSubArrayOfK(vector<int> &vec,int k){
    int f =-1,l =-1;
    int p =-1,q =-1;

    int n =vec.size();

    for(int i=0; i<n; i++){
        if(p == -1 && vec[i] == k){
            p =i;
            q =i;
        }else if(p != -1){
            if(vec[i] == k) q =i;
            else{
                bool cond =(f == -1) || (l-f+1 < q-p+1);
                if(cond){
                    f =p;
                    l =q;
                    p =-1;
                    q =-1;
                }

            }
        }
    }

    if(p != -1){
        bool cond =(f == -1) || (l-f+1 < q-p+1);
        if(cond){
            f =p;
            l =q;
        }
    }

    vec.erase(vec.begin()+f,vec.begin()+l+1);

    cout <<"after deleting:\n";
    for(int el: vec) cout <<el<<" ";
    cout <<endl;
}
