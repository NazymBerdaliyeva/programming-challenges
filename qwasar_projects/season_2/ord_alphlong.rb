##
##
## QWASAR.IO -- ord_alphlong
##
##
## @param {String} param_1
##
## @return {string}
##

def ord_alphlong(param_1)
  splitted = param_1.split 
  
  res = splitted.sort do |a,b|
    a.upcase <=> b.upcase
  end
  
  map = Hash.new []
  res.each do |word|
    map[word.length] += [word]
  end
  
  result = ""
  inner = 0
  outer = 0
  
  map.keys.sort.each { |key| 
    map[key].each do |value|
      inner += 1
      result << value
      if(map[key].length > 1 && inner != map[key].length)
        result += " "
      end
    end
    inner = 0
    outer += 1
    if(outer != map.length)
      result << "^"
    end
  }
  return result
end

