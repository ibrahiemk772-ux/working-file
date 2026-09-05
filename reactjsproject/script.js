for(let num = 100; num < 500; num++)
{
    let temp = num;
    let sum = 0;
    while(temp > 0)
    {
        let  rem = temp % 10;
        sum += rem * rem * rem;
        temp = Math.floor(temp / 10);
    }
    
}
if(sum == num)
    {
        document.getElementById('root').innerHTML += `<h2>${num} is an armstrong number</h2>`;
    }
