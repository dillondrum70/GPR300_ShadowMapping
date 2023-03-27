#include "TextureManager.h"

TextureManager::TextureManager()
{
	for (int i = 0; i < MAX_TEXTURES; i++)
	{
		textures[i] = Texture(GL_TEXTURE0 + (i * 2), GL_TEXTURE0 + (i * 2) + 1);
	}
}

Texture TextureManager::AddTexture(const char* texFilePath, const char* normFilePath)
{
	textures[textureCount] = Texture(GL_TEXTURE0 + (textureCount * 2), GL_TEXTURE0 + (textureCount * 2) + 1);
	textures[textureCount].CreateTexture(texFilePath, normFilePath);
	glActiveTexture(textures[textureCount].texNumber);
	glBindTexture(GL_TEXTURE_2D, textures[textureCount].GetTexture());

	glActiveTexture(textures[textureCount].normNumber);
	glBindTexture(GL_TEXTURE_2D, textures[textureCount].GetNormalMap());

	textureCount++;

	return textures[textureCount - 1];
}