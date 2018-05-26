namespace WindowsFormsApplication2
{
    partial class Form1
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
            this.components = new System.ComponentModel.Container();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.comboBox2 = new System.Windows.Forms.ComboBox();
            this.label2 = new System.Windows.Forms.Label();
            this.serialPort1 = new System.IO.Ports.SerialPort(this.components);
            this.recievetextbox = new System.Windows.Forms.RichTextBox();
            this.Sendtextbox = new System.Windows.Forms.RichTextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.send = new System.Windows.Forms.Button();
            this.label5 = new System.Windows.Forms.Label();
            this.startvalue = new System.Windows.Forms.TextBox();
            this.endvalue = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.button2 = new System.Windows.Forms.Button();
            this.plot_btn = new System.Windows.Forms.Button();
            this.trackBar1 = new System.Windows.Forms.TrackBar();
            this.linkLabel1 = new System.Windows.Forms.LinkLabel();
            this.label9 = new System.Windows.Forms.Label();
            this.button4 = new System.Windows.Forms.Button();
            this.readingtextbox = new System.Windows.Forms.RichTextBox();
            this.label11 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.trackingbox = new System.Windows.Forms.TextBox();
            this.label13 = new System.Windows.Forms.Label();
            this.datebox = new System.Windows.Forms.TextBox();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar1)).BeginInit();
            this.SuspendLayout();
            // 
            // comboBox1
            // 
            this.comboBox1.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Items.AddRange(new object[] {
            "COM1",
            "COM2",
            "COM3",
            "COM4",
            "COM5",
            "COM6",
            "COM7",
            "COM8",
            "COM9",
            "COM10",
            "COM11",
            "COM12",
            "COM13",
            "COM14",
            "COM15",
            "COM16",
            "COM17",
            "COM18",
            "COM19",
            "COM20",
            "COM21"});
            this.comboBox1.Location = new System.Drawing.Point(440, 366);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(121, 21);
            this.comboBox1.TabIndex = 2;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(347, 369);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(72, 13);
            this.label1.TabIndex = 3;
            this.label1.Text = "COM PORT";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // comboBox2
            // 
            this.comboBox2.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.comboBox2.FormattingEnabled = true;
            this.comboBox2.Items.AddRange(new object[] {
            "300",
            "600",
            "2400",
            "4800",
            "9600",
            "19200",
            "38400",
            "57600",
            "115200",
            "230400",
            "250000"});
            this.comboBox2.Location = new System.Drawing.Point(440, 404);
            this.comboBox2.Name = "comboBox2";
            this.comboBox2.Size = new System.Drawing.Size(121, 21);
            this.comboBox2.TabIndex = 4;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(347, 407);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(67, 13);
            this.label2.TabIndex = 5;
            this.label2.Text = "Baud Rate";
            // 
            // recievetextbox
            // 
            this.recievetextbox.Location = new System.Drawing.Point(12, 58);
            this.recievetextbox.Name = "recievetextbox";
            this.recievetextbox.Size = new System.Drawing.Size(289, 319);
            this.recievetextbox.TabIndex = 6;
            this.recievetextbox.Text = "";
            // 
            // Sendtextbox
            // 
            this.Sendtextbox.Location = new System.Drawing.Point(332, 38);
            this.Sendtextbox.Name = "Sendtextbox";
            this.Sendtextbox.Size = new System.Drawing.Size(316, 54);
            this.Sendtextbox.TabIndex = 8;
            this.Sendtextbox.Text = "";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(68, 9);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(190, 20);
            this.label3.TabIndex = 9;
            this.label3.Text = "Serially Recieved Data";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(441, 9);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(120, 20);
            this.label4.TabIndex = 10;
            this.label4.Text = "Data To Send";
            // 
            // send
            // 
            this.send.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.send.Location = new System.Drawing.Point(654, 38);
            this.send.Name = "send";
            this.send.Size = new System.Drawing.Size(57, 54);
            this.send.TabIndex = 11;
            this.send.Text = "Send";
            this.send.UseVisualStyleBackColor = true;
            this.send.Click += new System.EventHandler(this.send_Click);
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(425, 110);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(159, 20);
            this.label5.TabIndex = 12;
            this.label5.Text = "Fixed Data Range ";
            // 
            // startvalue
            // 
            this.startvalue.Location = new System.Drawing.Point(376, 146);
            this.startvalue.Name = "startvalue";
            this.startvalue.Size = new System.Drawing.Size(133, 20);
            this.startvalue.TabIndex = 13;
            // 
            // endvalue
            // 
            this.endvalue.Location = new System.Drawing.Point(590, 146);
            this.endvalue.Name = "endvalue";
            this.endvalue.Size = new System.Drawing.Size(121, 20);
            this.endvalue.TabIndex = 14;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label6.Location = new System.Drawing.Point(336, 149);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(34, 13);
            this.label6.TabIndex = 15;
            this.label6.Text = "Start";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label7.Location = new System.Drawing.Point(555, 149);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(29, 13);
            this.label7.TabIndex = 16;
            this.label7.Text = "End";
            // 
            // button2
            // 
            this.button2.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button2.Location = new System.Drawing.Point(441, 279);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(120, 61);
            this.button2.TabIndex = 17;
            this.button2.Text = "LOG DATA";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // plot_btn
            // 
            this.plot_btn.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.plot_btn.Location = new System.Drawing.Point(578, 279);
            this.plot_btn.Name = "plot_btn";
            this.plot_btn.Size = new System.Drawing.Size(133, 61);
            this.plot_btn.TabIndex = 19;
            this.plot_btn.Text = "Plot Data ";
            this.plot_btn.UseVisualStyleBackColor = true;
            this.plot_btn.Click += new System.EventHandler(this.plot_btn_Click);
            // 
            // trackBar1
            // 
            this.trackBar1.LargeChange = 1;
            this.trackBar1.Location = new System.Drawing.Point(339, 183);
            this.trackBar1.Maximum = 100;
            this.trackBar1.Name = "trackBar1";
            this.trackBar1.RightToLeftLayout = true;
            this.trackBar1.Size = new System.Drawing.Size(372, 45);
            this.trackBar1.TabIndex = 21;
            // 
            // linkLabel1
            // 
            this.linkLabel1.AutoSize = true;
            this.linkLabel1.Location = new System.Drawing.Point(13, 418);
            this.linkLabel1.Name = "linkLabel1";
            this.linkLabel1.Size = new System.Drawing.Size(141, 13);
            this.linkLabel1.TabIndex = 22;
            this.linkLabel1.TabStop = true;
            this.linkLabel1.Text = "Contact for More Information";
            this.linkLabel1.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.linkLabel1_LinkClicked);
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(13, 394);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(118, 13);
            this.label9.TabIndex = 23;
            this.label9.Text = "Made By : Vikas Yadav";
            this.label9.Click += new System.EventHandler(this.label9_Click);
            // 
            // button4
            // 
            this.button4.BackColor = System.Drawing.Color.Crimson;
            this.button4.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button4.Location = new System.Drawing.Point(590, 366);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(111, 63);
            this.button4.TabIndex = 26;
            this.button4.Text = "Start";
            this.button4.UseVisualStyleBackColor = false;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // readingtextbox
            // 
            this.readingtextbox.Location = new System.Drawing.Point(201, 407);
            this.readingtextbox.Name = "readingtextbox";
            this.readingtextbox.Size = new System.Drawing.Size(100, 24);
            this.readingtextbox.TabIndex = 27;
            this.readingtextbox.Text = "";
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.label11.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label11.Location = new System.Drawing.Point(198, 386);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(93, 13);
            this.label11.TabIndex = 28;
            this.label11.Text = "Total Readings";
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button1.Location = new System.Drawing.Point(578, 234);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(133, 27);
            this.button1.TabIndex = 29;
            this.button1.Text = "Send No";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // trackingbox
            // 
            this.trackingbox.Location = new System.Drawing.Point(440, 234);
            this.trackingbox.Multiline = true;
            this.trackingbox.Name = "trackingbox";
            this.trackingbox.Size = new System.Drawing.Size(121, 25);
            this.trackingbox.TabIndex = 30;
            // 
            // label13
            // 
            this.label13.AutoSize = true;
            this.label13.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.label13.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label13.Location = new System.Drawing.Point(347, 241);
            this.label13.Name = "label13";
            this.label13.Size = new System.Drawing.Size(77, 13);
            this.label13.TabIndex = 32;
            this.label13.Text = "Tracking No";
            // 
            // datebox
            // 
            this.datebox.Location = new System.Drawing.Point(12, 38);
            this.datebox.Name = "datebox";
            this.datebox.Size = new System.Drawing.Size(289, 20);
            this.datebox.TabIndex = 33;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DarkCyan;
            this.ClientSize = new System.Drawing.Size(723, 437);
            this.Controls.Add(this.datebox);
            this.Controls.Add(this.label13);
            this.Controls.Add(this.trackingbox);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label11);
            this.Controls.Add(this.readingtextbox);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.linkLabel1);
            this.Controls.Add(this.trackBar1);
            this.Controls.Add(this.plot_btn);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.endvalue);
            this.Controls.Add(this.startvalue);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.send);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.Sendtextbox);
            this.Controls.Add(this.recievetextbox);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.comboBox2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.comboBox1);
            this.Name = "Form1";
            this.Text = "Serial Monitor";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.trackBar1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.ComboBox comboBox2;
        private System.Windows.Forms.Label label2;
        private System.IO.Ports.SerialPort serialPort1;
        private System.Windows.Forms.RichTextBox recievetextbox;
        private System.Windows.Forms.RichTextBox Sendtextbox;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Button send;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox startvalue;
        private System.Windows.Forms.TextBox endvalue;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button plot_btn;
        private System.Windows.Forms.TrackBar trackBar1;
        private System.Windows.Forms.LinkLabel linkLabel1;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.RichTextBox readingtextbox;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TextBox trackingbox;
        private System.Windows.Forms.Label label13;
        private System.Windows.Forms.TextBox datebox;
    }
}

