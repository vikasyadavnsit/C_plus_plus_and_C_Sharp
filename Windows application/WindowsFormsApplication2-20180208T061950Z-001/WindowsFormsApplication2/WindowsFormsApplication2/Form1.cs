using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;
using System.Diagnostics;
using System.Threading;

namespace WindowsFormsApplication2
{
    public partial class Form1 : Form
    {

        Form2 chart12 = new Form2();
        public string indata;
        public UInt64 count;


        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label9_Click(object sender, EventArgs e)
        {

        }

        private void comboBox4_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void send_Click(object sender, EventArgs e)
        {

            serialPort1.WriteLine(Sendtextbox.Text);                            
        }
          
        public void button4_Click(object sender, EventArgs e)
        {
            if (comboBox1.SelectedIndex == -1)
            {
                //MessageBox.Show("Please Select a COMPORT");
                var thread = new Thread(
                 () =>
                 {
                     MessageBox.Show("Buy pizza, pay with snakes");
                 });
                thread.IsBackground = true;
                thread.Start();
                var t = Task.Delay(1000);
                t.Wait();
                thread.Abort();

                //Environment.Exit();
                goto aborting ;
            }
            else
                serialPort1.PortName = comboBox1.SelectedItem.ToString();
            if (comboBox2.SelectedIndex == -1)
                serialPort1.BaudRate = 9600;
            else
            {

                serialPort1.BaudRate = Convert.ToInt32(comboBox2.Text);
            }
            serialPort1.DataBits.Equals(8);
            serialPort1.Parity = Parity.None;
            serialPort1.StopBits = StopBits.One;
            //serialPort1.ReadLine();

                  
            serialPort1.Open();

            aborting:
        //    return;
            if (serialPort1.IsOpen == true)
                button4.BackColor = Color.GreenYellow;
            // MessageBox.Show("Sucessfully Connected to the "+comboBox1.SelectedItem.ToString());
            //var t = Task.Delay(1000);
            //t.Wait();
            // button4.Enabled = false;
            serialPort1.DataReceived += new SerialDataReceivedEventHandler(Display);
            trackBar1.ValueChanged += new System.EventHandler(tracking);
            //  chart12.Show();
         
        }

        public void tracking(Object sender , System.EventArgs e)
        {
            trackingbox.Text = trackBar1.Value.ToString();
        }

        public void Display(object sender, SerialDataReceivedEventArgs e)
        {
            SerialPort sp = (SerialPort)sender;
            indata = sp.ReadExisting();
            count++;
            //Debug.Print("Data Received:");
            //Debug.Print(indata);
            DateTime t12 = DateTime.Now;
            String tame = t12.ToString("");
            
            TextBox.CheckForIllegalCrossThreadCalls = false;
            datebox.Text = tame;
            recievetextbox.AppendText(" " + indata);
            recievetextbox.ScrollToCaret();
            readingtextbox.Text = count.ToString();
            chart12.chartdisplay(count, indata);
            Form3 logdata = new Form3();
            if (logdata.check == 0 || logdata.check == 1)
               logdata.log();
        }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            MessageBox.Show("Creator = Mr. Vikas Yadav \nEmail Address = vikasy.ec@nsit.net.in \nfor further queries send me an Email");
        }

        public void button1_Click(object sender, EventArgs e)
        {
            trackBar1.Minimum = string.IsNullOrEmpty(startvalue.Text) ? 0 : int.Parse(startvalue.Text);
            trackBar1.Maximum = string.IsNullOrEmpty(endvalue.Text) ? 0 : int.Parse(endvalue.Text);
            //recievetextbox.AppendText(trackBar1.Value.ToString());
            serialPort1.Write(trackBar1.Value.ToString());                     
        }

        private void plot_btn_Click(object sender, EventArgs e)
        {
            chart12.Show();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Form3 logdata = new Form3();
            logdata.Show();
        }
    }
}
