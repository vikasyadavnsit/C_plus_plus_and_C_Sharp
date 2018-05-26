using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication2
{
    public partial class Form2 : Form
    {

        
        
        public Form2()
        {
            InitializeComponent();
        }

        private void chart1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            chart1.Series["Series1"].Points.Clear();
            bn = 0;
        }
        static int bn = 0;
        int a=30;
        public void chartdisplay(UInt64 v , String dta)
        {
            bn++;
            //chart1.Titles.Add("Serial Data");

            if(plotcombo.Text.Equals("Bar Graph"))
                chart1.Series["Series1"].ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Column;
            else if(plotcombo.Text.Equals("Pie"))
                chart1.Series["Series1"].ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Pie;
            else 
                chart1.Series["Series1"].ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Line;
            

            chart1.Series["Series1"].Color = Color.BlueViolet;
            chart1.Series["Series1"].Points.AddY(dta);
            /*if (bn>70)
            {
                bn = 0;            
                chart1.Series["Series1"].Points.Clear();
            }
            */
            
            if (bn> a)
            {
                chart1.Series["Series1"].Points.RemoveAt(0);
                bn = a;
            }

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void setbutton_Click(object sender, EventArgs e)
        {
                a = string.IsNullOrEmpty(usrbox.Text) ? 30 : int.Parse(usrbox.Text);

        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
