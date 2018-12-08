// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSHUD.h"
#include "Engine/Canvas.h"

void AFPSHUD::DrawHUD()
{
	Super::DrawHUD();

	//Crosshaair Implementation
	if (CrosshairTexture)
	{
		//Find the center of our canvas
		FVector2D Center(Canvas->ClipX*0.5f, Canvas->ClipY*0.5f);

		// OffSet by half of the textures's dimensions so that the center of the Texture aligns with the center of the Canvas.
		FVector2D CrossHairDrawnPosition(Center.X - (CrosshairTexture->GetSurfaceWidth()*0.5f), Center.Y - (CrosshairTexture->GetSurfaceHeight()*0.5f));

		//Draw the Crosshair at the centerpoint.
		FCanvasTileItem TileItem(CrossHairDrawnPosition, CrosshairTexture->Resource,FLinearColor::White);
		TileItem.BlendMode = SE_BLEND_Translucent;
		Canvas->DrawItem(TileItem);
	}
}
