env = Environment()

debug = ARGUMENTS.get('debug', 1)

if int(debug):
    env['CCFLAGS'] = '-std=c99 -Wall -g -fPIC'
else:
    env['CCFLAGS'] = '-std=c++0x -Wall -O3 -fPIC'

env['STATIC_AND_SHARED_OBJECTS_ARE_THE_SAME'] = 1
env['LIBPREFIX'] = ''
env['SHLIBPREFIX'] = ''

env['CC'] = 'g++'

env['CPPPATH'] = [
    '#.',
    ]

Export('env')

SConscript('#data_structure/SConscript')
SConscript('#algorithm/SConscript')
SConscript('#test/SConscript')
