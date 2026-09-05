for(let i = 0; i< 100; i++)
{
    let  prime = true
    if(i <= 1)
    {
        prime = false;
    }
   for(let j = 2; j< i/2; j++)
   {
        if(i % j == 0)
            {
                prime = false;
                break;
            }  
   }
   if(prime)
   {
    document.getElementById('root').innerHTML += '<h2>'+i+' is a prime number</h2>'
   }
}
