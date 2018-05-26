using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace WindowsFormsApplication2
{
    public partial class Form3 : Form
    {
        
        public Form3()
        {
            InitializeComponent();
        }

        public int check = 2;
        Form1 vks = new Form1();
        DateTime nap = new DateTime();
        string Location2,Location1;

        private void savebtn_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "")
            {
                check= 1;
                Location1 = "C:\\Users\\Serial1.txt";
                File.WriteAllText(Location1, nap.ToString("") + "\n");
            }
            else
            {
                File.WriteAllText(Location2, nap.ToString("") + "\n");
                check = 0;
            }

        }

        public void log()
        {
            if(check==0)
            {
                File.AppendAllText(Location2, nap.ToString("hh:mm:ss") + "  :"+vks.indata + "\n");

            }
            else
            {
                File.AppendAllText(Location1, nap.ToString("hh:mm:ss") + "  :" + vks.indata + "\n");

            }
        }


        private void serachbtn_Click(object sender, EventArgs e)
        {
            folderBrowserDialog1.ShowDialog();
            textBox1.Text = folderBrowserDialog1.SelectedPath;
            Location2 = folderBrowserDialog1.SelectedPath;                          
        }

        private void filebox_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(comboBox1.SelectedIndex == -1 || comboBox1.SelectedIndex == 0)
             Location2= Location2 + "\\" + filebox.Text + ".txt";
            else if(comboBox1.SelectedIndex == 1)
                Location2 = Location2 + "\\" + filebox.Text + ".pdf";
        }
    }
}
