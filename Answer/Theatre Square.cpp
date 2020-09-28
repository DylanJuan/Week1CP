#include<stdio.h>
int main(){
long long int q,w,e,a,b;
scanf("%lld%lld%lld",&q,&w,&e);
if(q%e==0){
    a=(q/e);
}
else if(q%e!=0){
    a=(q/e)+1;
}
if(w%e==0){
    b=(w/e);
}
else if(w%e!=0){
    b=(w/e)+1;
}




printf("%lld\n",a*b);
}
