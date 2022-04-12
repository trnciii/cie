#include "robo_factory.h"

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

/* 
 * --Robot�p�{�b�N�X�̕`��֐�----------------------------------------------------------------------
 * 
 * �@���{�b�g�p��makebox�֐��B�P�F�̔���`��
 * -----------------------------------------------------------------------------------------
 */
void makeboxROBOT(double width, double height, double length, GLenum type)
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

	//�O�ʕ`��
	glNormal3d(0.0, 0.0, 1.0);
	glBegin(type);
		glVertex3dv(box[0]);
		glVertex3dv(box[1]);
		glVertex3dv(box[2]);
		glVertex3dv(box[3]);
	glEnd();

	//��ʕ`��
	glNormal3d(0.0, 0.0, -1.0);
	glBegin(type);
		glVertex3dv(box[4]);
		glVertex3dv(box[5]);
		glVertex3dv(box[6]);
		glVertex3dv(box[7]);
	glEnd();
	
	//��ʕ`��
	glNormal3d(0.0, 1.0, 0.0);
	glBegin(type);
		glVertex3dv(box[4]);
		glVertex3dv(box[0]);
		glVertex3dv(box[3]);
		glVertex3dv(box[7]);
	glEnd();

	//�E�ʕ`��
	glNormal3d(1.0, 0.0, 0.0);
	glBegin(type);
		glVertex3dv(box[3]);
		glVertex3dv(box[2]);
		glVertex3dv(box[6]);
		glVertex3dv(box[7]);
	glEnd();

	//���ʕ`��
	glNormal3d(-1.0, 0.0, 0.0);
	glBegin(type);
		glVertex3dv(box[4]);
		glVertex3dv(box[5]);
		glVertex3dv(box[1]);
		glVertex3dv(box[0]);
	glEnd();
	
	//���ʕ`��
	glNormal3d(0.0, -1.0, 0.0);
	glBegin(type);
		glVertex3dv(box[6]);
		glVertex3dv(box[5]);
		glVertex3dv(box[1]);
		glVertex3dv(box[2]);
	glEnd();
}

void MakeListRoboHead( int list )
{
	// �f�B�X�v���C���X�g1
	// ��
	glNewList(list, GL_COMPILE);
	glPushMatrix();

		glTranslated( 0, 4, 0);
		glColor3d(0.8, 0.8, 0.0);
		makeboxROBOT( 0.4, 1.2, 0.4, GL_POLYGON );//��p�[�c	

		glTranslated(0.0, 0.6, 0.0);
		glColor3d(1.0, 1.0, 0.0);
		makeboxROBOT( 1.0, 1.0, 1.0, GL_POLYGON  );//���p�[�c	
		
		
		glTranslated(0.0, 0.0, 0.3);
		glColor3d(0.0, 0.8, 0.0);
		makeboxROBOT( 1.2, 0.3, 0.6, GL_POLYGON  );//���p�[�c	

	glPopMatrix();
	glEndList();
}

void MakeListRoboBody( int list )
{
	// �f�B�X�v���C���X�g2
	// ���{�b�g�̕`��
	glNewList(list, GL_COMPILE);
	glPushMatrix();
		
		glTranslated( 0, -4, 0);
		glColor3d(0.0, 1.0, 1.0);
		makeboxROBOT( 1.3, 0.7, 1.0, GL_POLYGON  );//���p�[�c
		
		glPushMatrix();
			glTranslated(0.0, -0.3, 0.0);
			glColor3d(0.0, 0.8, 0.8);
			makeboxROBOT( 0.5, 1.0, 0.9, GL_POLYGON  );

			glTranslated(0.0, -0.3, 0.0);
			glColor3d(1.0, 0.0, 1.0);
			makeboxROBOT( 2.0, 0.2, 0.2, GL_POLYGON  );
		glPopMatrix();

		// ����
		glPushMatrix();
		glTranslated(0.0, 0.4, 0.0);

		glTranslated(0.0, 0.3, 0.0);
		glColor3d(0.8, 0.0, 0.0);
		makeboxROBOT( 0.6, 1.0, 0.6, GL_POLYGON  );//���p�[�c

		glTranslated(0.0, 0.6, 0.0);
		glColor3d(1.0, 0.0, 0.0);
		makeboxROBOT( 1.8, 1.2, 1.0, GL_POLYGON  );//���p�[�c
			
		glTranslated(0.0, 0.3, 0.0);
		glColor3d(1.0, 0.0, 1.0);
		makeboxROBOT( 3.4, 0.2, 0.2, GL_POLYGON  );//���֐߃p�[�c

			// ����
			glPushMatrix();
				glTranslated(1.3, -0.5, 0.0);
				glTranslated(0.0, 0.5, 0.0);			
				
				glTranslated(0.0, -0.5, 0.0);
				glColor3d(0.0, 1.0, 0.0);
				makeboxROBOT( 0.5, 1.5, 0.5, GL_POLYGON  );//��r�p�[�c				

				glTranslated(0.0, -0.5, 0.0);
				glColor3d(1.0, 0.0, 1.0);
				makeboxROBOT( 0.8, 0.2, 0.2, GL_POLYGON  );//�I�֐߃p�[�c

					glPushMatrix();				
						glTranslated(0.0, 0.0, 0.0);
						glRotated(-40.0, 1.0, 0.0, 0.0);				
						
						glTranslated(0.0, -0.5, 0.0);
						glColor3d(0.0, 0.8, 0.0);
						makeboxROBOT( 0.6, 1.6, 0.7, GL_POLYGON  );//�r�p�[�c	

						glTranslated(0.0, -0.9, 0.0);
						glColor3d(1.0, 1.0, 0.0);
						makeboxROBOT( 0.5, 0.7, 0.5, GL_POLYGON );//��p�[�c	
					glPopMatrix();
			glPopMatrix();

			// �E��
			glPushMatrix();
				glTranslated(-1.3, -0.5, 0.0);
				glTranslated(0.0, 0.5, 0.0);
				
				glTranslated(0.0, -0.5, 0.0);
				glColor3d(0.0, 1.0, 0.0);
				makeboxROBOT( 0.5, 1.5, 0.5, GL_POLYGON  );//��r�p�[�c				

				glTranslated(0.0, -0.5, 0.0);
				glColor3d(1.0, 0.0, 1.0);
				makeboxROBOT( 0.8, 0.2, 0.2, GL_POLYGON  );//�I�֐߃p�[�c

					glPushMatrix();				
						glTranslated(0.0, 0.0, 0.0);
						glRotated(-40.0, 1.0, 0.0, 0.0);
									
						glTranslated(0.0, -0.5, 0.0);
						glColor3d(0.0, 0.8, 0.0);
						makeboxROBOT( 0.6, 1.6, 0.7, GL_POLYGON );//�r�p�[�c	

						glTranslated(0.0, -0.9, 0.0);
						glColor3d(1.0, 1.0, 0.0);
						makeboxROBOT( 0.5, 0.7, 0.5, GL_POLYGON );//��p�[�c	
					glPopMatrix();
			glPopMatrix();
		glPopMatrix();


		
		// �E��
		glPushMatrix();
				glTranslated(-0.6, -1.2, 0.0);
				glTranslated(0.0, 0.5, 0.0);

				glRotated(-10.0, 1.0, 0.0, 0.0);
				
				
				glTranslated(0.0, -0.5, 0.0);
				glColor3d(0.0, 1.0, 0.0);
				makeboxROBOT( 0.5, 1.5, 0.5, GL_POLYGON );//�ڃp�[�c				

				glTranslated(0.0, -0.5, 0.0);
				glColor3d(1.0, 0.0, 1.0);
				makeboxROBOT( 0.8, 0.2, 0.2, GL_POLYGON );//�G�֐߃p�[�c


					glPushMatrix();				
						glTranslated(0.0, 0.0, 0.0);
						glRotated(20.0, 1.0, 0.0, 0.0);
						
						
						glTranslated(0.0, -0.5, 0.0);
						glColor3d(0.0, 0.8, 0.0);
						makeboxROBOT( 0.6, 1.6, 0.7, GL_POLYGON );//���p�[�c	

						glTranslated(0.0, -0.9, 0.0);
						glColor3d(1.0, 0.0, 1.0);
						makeboxROBOT( 0.5, 0.7, 0.5, GL_POLYGON );//����p�[�c

						glTranslated(0.0, -0.5, 0.3);
						glColor3d(1.0, 1.0, 0.0);
						glRotated(10.0, 1.0, 0.0, 0.0);
						makeboxROBOT( 0.7, 0.6, 1.4, GL_POLYGON );//���p�[�c

					glPopMatrix();
			glPopMatrix();
					
		// ����
		glPushMatrix();
				glTranslated(0.6, -1.2, 0.0);
				glTranslated(0.0, 0.5, 0.0);

				glRotated(-10.0, 1.0, 0.0, 0.0);

				glTranslated(0.0, -0.5, 0.0);
				glColor3d(0.0, 1.0, 0.0);
				makeboxROBOT( 0.5, 1.5, 0.5, GL_POLYGON );//�ڃp�[�c				

				glTranslated(0.0, -0.5, 0.0);
				glColor3d(1.0, 0.0, 1.0);
				makeboxROBOT( 0.8, 0.2, 0.2, GL_POLYGON );//�G�֐߃p�[�c

					glPushMatrix();				
						glTranslated(0.0, 0.0, 0.0);
						glRotated(20.0, 1.0, 0.0, 0.0);
							
						glTranslated(0.0, -0.5, 0.0);
						glColor3d(0.0, 0.8, 0.0);
						makeboxROBOT( 0.6, 1.6, 0.7, GL_POLYGON );//���p�[�c	

						glTranslated(0.0, -0.9, 0.0);
						glColor3d(1.0, 0.0, 1.0);
						makeboxROBOT( 0.5, 0.7, 0.5, GL_POLYGON );//����p�[�c

						glTranslated(0.0, -0.5, 0.3);
						glColor3d(1.0, 1.0, 0.0);
						glRotated(10.0, 1.0, 0.0, 0.0);
						makeboxROBOT( 0.7, 0.6, 1.4, GL_POLYGON );//���p�[�c
					glPopMatrix();
			glPopMatrix();
	glPopMatrix();
	glEndList();
}
