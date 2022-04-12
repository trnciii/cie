

#include "trace.h"


/* 
 * --�{�b�N�X�̕`��֐�----------------------------------------------------------------------
 * 
 * 	���_���S�ɕ�width, ����height, ���s��length�̃{�b�N�X��`��
 *  ��ԍŌ�͕`��̃^�C�v���w��B�����w�肵�Ȃ��ꍇ�A�����ŁuGL_LINE_LOOP�v
 * -----------------------------------------------------------------------------------------
 */
void makebox(double width, double height, double length, GLenum type)
{
	double box[8][3];	//���_�f�[�^�i�[�p�z��

	//���_�f�[�^�̊i�[
	box[0][0] = -width/2;	box[0][1] =  height/2;	box[0][2] = length/2;	
	box[1][0] = -width/2;	box[1][1] = -height/2;	box[1][2] = length/2;
	box[2][0] =  width/2;	box[2][1] = -height/2;	box[2][2] = length/2;
	box[3][0] =  width/2;	box[3][1] =  height/2;	box[3][2] = length/2;
	
	box[4][0] = -width/2;	box[4][1] =  height/2;	box[4][2] = -length/2;
	box[5][0] = -width/2;	box[5][1] = -height/2;	box[5][2] = -length/2;
	box[6][0] =  width/2;	box[6][1] = -height/2;	box[6][2] = -length/2;
	box[7][0] =  width/2;	box[7][1] =  height/2;	box[7][2] = -length/2;

	//�O�ʕ`��E���F
	glColor3d(1.0, 1.0, 0.0);
	glNormal3d(0.0, 0.0, 1.0);
	glBegin(type);
		glVertex3dv(box[0]);
		glVertex3dv(box[1]);
		glVertex3dv(box[2]);
		glVertex3dv(box[3]);
	glEnd();

	//��ʕ`��E��
	glColor3d(1.0, 0.0, 0.0);
	glNormal3d(0.0, 0.0, -1.0);
	glBegin(type);
		glVertex3dv(box[4]);
		glVertex3dv(box[5]);
		glVertex3dv(box[6]);
		glVertex3dv(box[7]);
	glEnd();
	
	//��ʕ`��E�}�[���_
	glColor3d(1.0, 0.0, 1.0);
	glNormal3d(0.0, 1.0, 0.0);
	glBegin(type);
		glVertex3dv(box[4]);
		glVertex3dv(box[0]);
		glVertex3dv(box[3]);
		glVertex3dv(box[7]);
	glEnd();

	//�E�ʕ`��E��
	glColor3d(0.0, 1.0, 0.0);
	glNormal3d(1.0, 0.0, 0.0);
	glBegin(type);
		glVertex3dv(box[3]);
		glVertex3dv(box[2]);
		glVertex3dv(box[6]);
		glVertex3dv(box[7]);
	glEnd();

	//���ʕ`��E�V�A��
	glColor3d(0.0, 1.0, 1.0);
	glNormal3d(-1.0, 0.0, 0.0);
	glBegin(type);
		glVertex3dv(box[4]);
		glVertex3dv(box[5]);
		glVertex3dv(box[1]);
		glVertex3dv(box[0]);
	glEnd();
	
	//���ʕ`��E��
	glColor3d(0.0, 0.0, 1.0);
	glNormal3d(0.0, -1.0, 0.0);
	glBegin(type);
		glVertex3dv(box[6]);
		glVertex3dv(box[5]);
		glVertex3dv(box[1]);
		glVertex3dv(box[2]);
	glEnd();
}




