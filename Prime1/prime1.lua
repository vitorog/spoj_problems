--Brute-force prime calculator, by Vitor Shade
--Implemented this just to learn a bit of Lua :)

test_cases = arg[1]
function PrintPrimes(lower_num, upper_num)
	num = lower_num
	not_prime = false	
	while num <= upper_num do	
		for j = 2, num - 1, 1 do
			if (num % j == 0) and (num ~= j) then
				not_prime = true
				break				
			end
		end 
		if not_prime == false then
			print(num)
		end
		num = num + 1
		not_prime = false		
	end 
end

for i = 0, test_cases - 1, 1 do		
	PrintPrimes(tonumber(arg[(2*i) + 2]), tonumber(arg[(2*i) + 3]));	
	print("")
end
