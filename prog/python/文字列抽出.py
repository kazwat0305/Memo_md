import re

def 数字抜き出し():
    res = 'IMEI = 123456789012345\n'
    
    imei = re.search('IMEI = (.*)\n', res)          # .:任意の一文字, *:0回以上の繰り返し
    imei_num = re.search('IMEI = ([0-9]+)\n', res)  # [0-9]:任意の数字, +:１回以上の繰り返し
    imei_num2 = re.match('IMEI = (\d+)\n', res)     # \d:任意の数字, +:１回以上の繰り返し
    
    print(imei.group(1))
    print(imei_num.group(1))
    print(imei_num2.group(1))

def main():
    数字抜き出し()

if __name__ == '__main__':
    main()
