require 'date'

def my_csv_parser(param_1, param_2)
  values = param_1.split("\n");
  i = 0
  resarray = []
  values.each do |value|
    resarray.push(value.split(","))
  end
  return resarray
end

def processEmail(email)
  parts = email.split("@")
  return parts[1]
end    

def processAge(ageStr)
  category = ""
  age = Integer(ageStr)
  if(1 <= age && age <= 20)
    category = "1->20"
  elsif (21 <= age && age <= 40)
    category = "21->40";
  elsif (41 <= age && age <= 65)
    category = "41->65";
  else
    category = "66->99"
  end
  return category  
end    

def processDate(date)
  timeName = ''  
  temp = DateTime.parse(date, '%Y-%m-%d %H:%M:%S')
  time = temp.to_s.split("T")
  morningStart = DateTime.parse('06:00:00', '%H:%M:%S').to_s.split("T")
  morningEnd = DateTime.parse('11:59:00', '%H:%M:%S').to_s.split("T")
  afternoonStart = DateTime.parse('12:00:00', '%H:%M:%S').to_s.split("T")
  afternoonEnd = DateTime.parse('17:59:00', '%H:%M:%S').to_s.split("T")
  eveningStart = DateTime.parse('18:00:00', '%H:%M:%S').to_s.split("T")
  eveningEnd = DateTime.parse('23:59:00', '%H:%M:%S').to_s.split("T")
   
  if(morningStart[1] <= time[1] && time[1] < morningEnd[1])
     timeName = 'morning'
  elsif (afternoonStart[1] <= time[1] && time[1] < afternoonEnd[1])
     timeName = 'afternoon'
  else
     timeName = 'evening'
  end
  return timeName
end   

def joinToArray(values)
  i = 0
  row = values.length
  resArray = []
  while(i < row)
        temp = values[i].join(',')
        resArray.push(temp)
        i += 1
       # puts(temp)
  end 
  return resArray 
end



def my_data_transform(param_1)
  values = my_csv_parser(param_1, ',')
  i = 1
  len = values.length
  while(i < len)
    values[i][4] = processEmail(values[i][4])
    values[i][5] = processAge(values[i][5])
    values[i][9] = processDate(values[i][9])
    i += 1
  end  

  array = joinToArray(values)
  return array
end

def splitTo2DArray(param_1)
   result = []
   i = 0
   len = param_1.length
   while(i < len)
     result.push(param_1[i].split(','))
     i += 1
     #puts(result)
   end 
   return result
end    

def my_data_process(values)
  csvTable =  splitTo2DArray(values)
  result = []
  i = 1
  len = csvTable.length
  my_hash = Hash.new()
  my_hash['Gender'] = Hash.new()
  while(i < len)
    if (my_hash['Gender'].has_key? csvTable[i][0])
        my_hash['Gender'][csvTable[i][0]] += 1
    else
        my_hash['Gender'][csvTable[i][0]] = 1
    end
    i += 1
  end 
  
  i = 1
  my_hash['Email'] = Hash.new()
  while(i < len)
    if (my_hash['Email'].has_key? csvTable[i][4])
        my_hash['Email'][csvTable[i][4]] += 1
    else
        my_hash['Email'][csvTable[i][4]] = 1
    end
    i += 1
  end

i = 1
  my_hash['Age'] = Hash.new()
  while(i < len)
    if (my_hash['Age'].has_key? csvTable[i][5])
        my_hash['Age'][csvTable[i][5]] += 1
    else
        my_hash['Age'][csvTable[i][5]] = 1
    end
    i += 1
  end

  i = 1
  my_hash['City'] = Hash.new()
  while(i < len)
    if (my_hash['City'].has_key? csvTable[i][6])
        my_hash['City'][csvTable[i][6]] += 1
    else
        my_hash['City'][csvTable[i][6]] = 1
    end
    i += 1
  end

  i = 1
  my_hash['Device'] = Hash.new()
  while(i < len)
    if (my_hash['Device'].has_key? csvTable[i][7])
        my_hash['Device'][csvTable[i][7]] += 1
    else
        my_hash['Device'][csvTable[i][7]] = 1
    end
    i += 1
  end

i = 1
  my_hash['Order At'] = Hash.new()
  while(i < len)
    if (my_hash['Order At'].has_key? csvTable[i][9])
        my_hash['Order At'][csvTable[i][9]] += 1
    else
        my_hash['Order At'][csvTable[i][9]] = 1
    end
    i += 1
  end

#   my_hash.each do |key, value|
#       puts ("#{key} : #{value}")
#   end
  return my_hash
end




# data = my_data_transform("Gender,FirstName,LastName,UserName,Email,Age,City,Device,Coffee Quantity,Order At\nMale,Carl,Wilderman,carl,wilderman_carl@yahoo.com,29,Seattle,Safari iPhone,2,2020-03-06 16:37:56\nMale,Marvin,Lind,marvin,marvin_lind@hotmail.com,77,Detroit,Chrome Android,2,2020-03-02 13:55:51\nFemale,Shanelle,Marquardt,shanelle,marquardt.shanelle@hotmail.com,21,Las Vegas,Chrome,1,2020-03-05 17:53:05\nFemale,Lavonne,Romaguera,lavonne,romaguera.lavonne@yahoo.com,81,Seattle,Chrome,2,2020-03-04 10:33:53\nMale,Derick,McLaughlin,derick,mclaughlin.derick@hotmail.com,47,Chicago,Chrome Android,1,2020-03-05 15:19:48\n")

# my_data_process(data)
