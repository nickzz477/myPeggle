#include "Peggle.h"
#include "Sprite.h"
#include "ResourceIDs.h"

Peggle::Peggle()
{
	Textures->LoadTexture(Texture::CNN_BLL, "canon_ball.png");
	Textures->LoadTexture(Texture::CNN, "canon.png");
	Textures->LoadTexture(Texture::BL_BR, "blue_bar.png");
	Textures->LoadTexture(Texture::RD_BR, "red_bar.png");
	Textures->LoadTexture(Texture::BL_PGL, "blue_peggle.png");
	Textures->LoadTexture(Texture::RD_PGL, "red_peggle.png");
	Textures->LoadTexture(Texture::BLL_PT, "ball_pit.png");
	//Sounds->LoadSound(Sound::TestMusicID, "testmusic.mp3");
	//Sounds->LoadSound(Sound::TestSoundFXID, "bell.wav");
	//AudioSys->play2D(Sounds->Get(Sound::TestMusicID));
	//AudioSys->play2D(Sounds->Get(Sound::TestSoundFXID));

	Sprite* s = new Sprite(Texture::CNN_BLL);
	D3DXVECTOR3 &center(s->GetTextureInfos()->infos.Width / 2, s->GetTextureInfos()->infos.Width / 2, 0.0f);
	s->SetPivot(center);

	Sprite* s2 = new Sprite(Texture::CNN);
	Sprite* s3 = new Sprite(Texture::BL_BR);
	Sprite* s4 = new Sprite(Texture::RD_BR);
	Sprite* s5 = new Sprite(Texture::BL_PGL);
	Sprite* s6 = new Sprite(Texture::RD_PGL);
	Sprite* s7 = new Sprite(Texture::BLL_PT);

	std::cout << s->GetTextureInfos()->infos.Width;
}

Peggle::~Peggle()
{

}

void Peggle::Start()
{
	
}

void Peggle::Update()
{

}

void Peggle::Draw()
{

}

void Peggle::Stop()
{

}
