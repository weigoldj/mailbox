# Overview: 
# 1) Compile each c file into a .o file
# 2) Link the .o and libraries into the exe.

# Basic Options:
# -g         => turn on debugging
# -Wall      => turns on most warnings
# -O or -O2  => turn on optimizations
# -o <name>  => name the output file
# -c <name>  => output object file
# -I <path>  => specify the include directory.
# -L <path>  => specify a library directory
# -l <lib>   => link with library lib<library>.a

require 'rake'

# specify a compiler.
CC = "g++"

# project name
PROJECT = "mailbox"

# where to place the executable
EDIR = "bin"

# source directory
SDIR = "src"

# object directory
ODIR = "obj"

task :init do 
  @files = Rake::FileList["src/**/*.cpp"]
end 

desc "print build configuration" 
task :print => "init" do
  puts "Settings for PROJECT => #{PROJECT}"
  puts "compiler =>  #{CC}"
  puts "exe      =>  #{EDIR}/#{PROJECT}"
  puts "src      =>  #{SDIR}"
  puts "obj      =>  #{ODIR}"
  puts "Files to compile  #{@files.pathmap("%n")}"
end 

desc "cleans .o and exe files." 
task :clean => "init" do 
  puts "cleaning *.o files and #{PROJECT} executable."
  system("rm -rf #{ODIR}/*.o #{EDIR}/#{PROJECT}")
end

desc "build C++ program"
task :compile => "clean" do 
  puts "building mailbox program Mailbox"
  
  # @files.pathmap("%n").each do |file| 
  @files.each do |file| 
    puts "compiling file #{file}"
    system("#{CC} -c #{file} -o #{ODIR}/#{file.pathmap('%n')}.o")
  end
  
end 

desc "link file and libraries into #{PROJECT}"
task :link => "compile" do
  ofiles = Rake::FileList["obj/**/*.o"]
  system("#{CC} -o #{EDIR}/mailbox #{ofiles}")
end

desc "run the software"
task :run do 
  system("bin/#{PROJECT}")
end
