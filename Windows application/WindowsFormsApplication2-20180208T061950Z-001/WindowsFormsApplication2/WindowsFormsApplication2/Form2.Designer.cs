namespace WindowsFormsApplication2
{
    partial class Form2
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea2 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend2 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            System.Windows.Forms.DataVisualization.Charting.Series series2 = new System.Windows.Forms.DataVisualization.Charting.Series();
            this.chart1 = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.button1 = new System.Windows.Forms.Button();
            this.usrbox = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.setbutton = new System.Windows.Forms.Button();
            this.plotcombo = new System.Windows.Forms.ComboBox();
            this.label2 = new System.Windows.Forms.Label();
            this.button2 = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).BeginInit();
            this.SuspendLayout();
            // 
            // chart1
            // 
            chartArea2.Name = "Serial Data";
            this.chart1.ChartAreas.Add(chartArea2);
            legend2.Name = "serial";
            this.chart1.Legends.Add(legend2);
            this.chart1.Location = new System.Drawing.Point(1, 51);
            this.chart1.Name = "chart1";
            series2.ChartArea = "Serial Data";
            series2.Legend = "serial";
            series2.Name = "Series1";
            this.chart1.Series.Add(series2);
            this.chart1.Size = new System.Drawing.Size(904, 388);
            this.chart1.TabIndex = 0;
            this.chart1.Text = "chart1";
            this.chart1.Click += new System.EventHandler(this.chart1_Click);
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button1.Location = new System.Drawing.Point(12, 4);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(135, 41);
            this.button1.TabIndex = 1;
            this.button1.Text = "Erase Data";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // usrbox
            // 
            this.usrbox.Location = new System.Drawing.Point(349, 12);
            this.usrbox.Multiline = true;
            this.usrbox.Name = "usrbox";
            this.usrbox.Size = new System.Drawing.Size(84, 29);
            this.usrbox.TabIndex = 2;
            this.usrbox.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(164, 12);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(179, 24);
            this.label1.TabIndex = 3;
            this.label1.Text = "Retain Data Points";
            // 
            // setbutton
            // 
            this.setbutton.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.setbutton.Location = new System.Drawing.Point(439, 10);
            this.setbutton.Name = "setbutton";
            this.setbutton.Size = new System.Drawing.Size(75, 33);
            this.setbutton.TabIndex = 4;
            this.setbutton.Text = "Set";
            this.setbutton.UseVisualStyleBackColor = true;
            this.setbutton.Click += new System.EventHandler(this.setbutton_Click);
            // 
            // plotcombo
            // 
            this.plotcombo.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.plotcombo.FormattingEnabled = true;
            this.plotcombo.ItemHeight = 13;
            this.plotcombo.Items.AddRange(new object[] {
            "Bar Graph",
            "Line",
            "Pie"});
            this.plotcombo.Location = new System.Drawing.Point(666, 16);
            this.plotcombo.Name = "plotcombo";
            this.plotcombo.Size = new System.Drawing.Size(121, 21);
            this.plotcombo.TabIndex = 5;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(548, 14);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(96, 24);
            this.label2.TabIndex = 6;
            this.label2.Text = "Plot Style";
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(793, 13);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(82, 28);
            this.button2.TabIndex = 7;
            this.button2.Text = "Close";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(887, 451);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.plotcombo);
            this.Controls.Add(this.setbutton);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.usrbox);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.chart1);
            this.Name = "Form2";
            this.Text = "Form2";
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.DataVisualization.Charting.Chart chart1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TextBox usrbox;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button setbutton;
        private System.Windows.Forms.ComboBox plotcombo;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button button2;
    }
}