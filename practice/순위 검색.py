query = [
    "java and backend and junior and pizza 100",
    "python and frontend and senior and chicken 200",
    "cpp and - and senior and pizza 250",
    "- and backend and senior and - 150",
    "- and - and - and chicken 100",
    "- and - and - and - 150",
]

new = []
for i in query:
    replace = i.replace("and", "")
    split = replace.split(" ")
    split = [v for v in split if v]
    new.append(split)

print(new)
# [['java', 'backend', 'junior', 'pizza', '100'], ['python', 'frontend', 'senior', 'chicken', '200'], ['cpp', '-', 'senior', 'pizza', '250'], ['-', 'backend', 'senior', '-', '150'], ['-', '-', '-', 'chicken', '100'], ['-', '-', '-', '-', '150']]
