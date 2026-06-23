#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/Image_FillMethod.h"
#include "unitysdk/UnityEngine/UI/Image_Type.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::U2D { class SpriteAtlas; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_IMAGE_ADDQUADWITHUV1_1_OFFSET UNITYSDK_OFFSET(0x1DCDBB10)
#define UNITYENGINE_UI_IMAGE_ADDQUADWITHUV1_OFFSET UNITYSDK_OFFSET(0x1DCDC570)
#define UNITYENGINE_UI_IMAGE_ADDQUAD_1_OFFSET UNITYSDK_OFFSET(0x1DCDCD10)
#define UNITYENGINE_UI_IMAGE_ADDQUAD_OFFSET UNITYSDK_OFFSET(0x1DCDC360)
#define UNITYENGINE_UI_IMAGE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1DCDD710)
#define UNITYENGINE_UI_IMAGE_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1DCDD750)
#define UNITYENGINE_UI_IMAGE_COMPUTEUV1_OFFSET UNITYSDK_OFFSET(0x1DCDCA90)
#define UNITYENGINE_UI_IMAGE_DISABLESPRITEOPTIMIZATIONS_OFFSET UNITYSDK_OFFSET(0x1DCD37F0)
#define UNITYENGINE_UI_IMAGE_GENERATEFILLEDSPRITE_OFFSET UNITYSDK_OFFSET(0x1DCD9B80)
#define UNITYENGINE_UI_IMAGE_GENERATESIMPLESPRITE_OFFSET UNITYSDK_OFFSET(0x1DCD65F0)
#define UNITYENGINE_UI_IMAGE_GENERATESLICEDSPRITE_OFFSET UNITYSDK_OFFSET(0x1DCD7420)
#define UNITYENGINE_UI_IMAGE_GENERATESPRITE_OFFSET UNITYSDK_OFFSET(0x1DCD6F70)
#define UNITYENGINE_UI_IMAGE_GENERATETILEDSPRITE_OFFSET UNITYSDK_OFFSET(0x1DCD84E0)
#define UNITYENGINE_UI_IMAGE_GETADJUSTEDBORDERS_OFFSET UNITYSDK_OFFSET(0x1DCDB5A0)
#define UNITYENGINE_UI_IMAGE_GETDRAWINGDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x1DCD5BD0)
#define UNITYENGINE_UI_IMAGE_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1DCD5590)
#define UNITYENGINE_UI_IMAGE_GET_ACTIVESPRITE_OFFSET UNITYSDK_OFFSET(0x1DCD3850)
#define UNITYENGINE_UI_IMAGE_GET_ALPHAHITTESTMINIMUMTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1DCD41E0)
#define UNITYENGINE_UI_IMAGE_GET_DEFAULTETC1GRAPHICMATERIAL_OFFSET UNITYSDK_OFFSET(0x1DCD4330)
#define UNITYENGINE_UI_IMAGE_GET_EVENTALPHATHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1DCD4150)
#define UNITYENGINE_UI_IMAGE_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1DCD3E80)
#define UNITYENGINE_UI_IMAGE_GET_FILLCENTER_OFFSET UNITYSDK_OFFSET(0x1DCD3C80)
#define UNITYENGINE_UI_IMAGE_GET_FILLCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1DCD3F90)
#define UNITYENGINE_UI_IMAGE_GET_FILLMETHOD_OFFSET UNITYSDK_OFFSET(0x1DCD3D60)
#define UNITYENGINE_UI_IMAGE_GET_FILLORIGIN_OFFSET UNITYSDK_OFFSET(0x1DCD4070)
#define UNITYENGINE_UI_IMAGE_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1DCDDC60)
#define UNITYENGINE_UI_IMAGE_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1DCDD9F0)
#define UNITYENGINE_UI_IMAGE_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x1DCD53C0)
#define UNITYENGINE_UI_IMAGE_GET_HASBORDER_OFFSET UNITYSDK_OFFSET(0x1DCD4D40)
#define UNITYENGINE_UI_IMAGE_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1DCDDC70)
#define UNITYENGINE_UI_IMAGE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DCD4520)
#define UNITYENGINE_UI_IMAGE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1DCD4980)
#define UNITYENGINE_UI_IMAGE_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1DCDDA00)
#define UNITYENGINE_UI_IMAGE_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1DCDD790)
#define UNITYENGINE_UI_IMAGE_GET_MULTIPLIEDPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1DCD5950)
#define UNITYENGINE_UI_IMAGE_GET_NORMALIZEDUV1_OFFSET UNITYSDK_OFFSET(0x1DCD4F00)
#define UNITYENGINE_UI_IMAGE_GET_OVERRIDESPRITE_OFFSET UNITYSDK_OFFSET(0x1DCD3840)
#define UNITYENGINE_UI_IMAGE_GET_PIXELSPERUNITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1DCD5600)
#define UNITYENGINE_UI_IMAGE_GET_PIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1DCD5680)
#define UNITYENGINE_UI_IMAGE_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1DCDDA10)
#define UNITYENGINE_UI_IMAGE_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1DCDD7A0)
#define UNITYENGINE_UI_IMAGE_GET_PRESERVEASPECT_OFFSET UNITYSDK_OFFSET(0x1DCD3BA0)
#define UNITYENGINE_UI_IMAGE_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0x1DCD2EB0)
#define UNITYENGINE_UI_IMAGE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DCD3A80)
#define UNITYENGINE_UI_IMAGE_GET_USESPRITEMESH_OFFSET UNITYSDK_OFFSET(0x1DCD4200)
#define UNITYENGINE_UI_IMAGE_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1DCDDC80)
#define UNITYENGINE_UI_IMAGE_MAPCOORDINATE_OFFSET UNITYSDK_OFFSET(0x1DCDE2A0)
#define UNITYENGINE_UI_IMAGE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DCD59C0)
#define UNITYENGINE_UI_IMAGE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DCD5980)
#define UNITYENGINE_UI_IMAGE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1DCDB2E0)
#define UNITYENGINE_UI_IMAGE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DCDEFA0)
#define UNITYENGINE_UI_IMAGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1DCDAED0)
#define UNITYENGINE_UI_IMAGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DCDAE80)
#define UNITYENGINE_UI_IMAGE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1DCD63D0)
#define UNITYENGINE_UI_IMAGE_PRESERVESPRITEASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1DCD5A60)
#define UNITYENGINE_UI_IMAGE_RADIALCUT_1_OFFSET UNITYSDK_OFFSET(0x1DCDD080)
#define UNITYENGINE_UI_IMAGE_RADIALCUT_OFFSET UNITYSDK_OFFSET(0x1DCDCF10)
#define UNITYENGINE_UI_IMAGE_REBUILDIMAGE_OFFSET UNITYSDK_OFFSET(0x1DCDEC60)
#define UNITYENGINE_UI_IMAGE_REBUILD_OFFSET UNITYSDK_OFFSET(0x1DCDF0D0)
#define UNITYENGINE_UI_IMAGE_SETNATIVESIZE_OFFSET UNITYSDK_OFFSET(0x1DCD6110)
#define UNITYENGINE_UI_IMAGE_SETUPMATERIALUV1PARAMS_OFFSET UNITYSDK_OFFSET(0x1DCD4F10)
#define UNITYENGINE_UI_IMAGE_SET_ALPHAHITTESTMINIMUMTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1DCD41F0)
#define UNITYENGINE_UI_IMAGE_SET_EVENTALPHATHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1DCD4170)
#define UNITYENGINE_UI_IMAGE_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1DCD3E90)
#define UNITYENGINE_UI_IMAGE_SET_FILLCENTER_OFFSET UNITYSDK_OFFSET(0x1DCD3C90)
#define UNITYENGINE_UI_IMAGE_SET_FILLCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1DCD3FA0)
#define UNITYENGINE_UI_IMAGE_SET_FILLMETHOD_OFFSET UNITYSDK_OFFSET(0x1DCD3D70)
#define UNITYENGINE_UI_IMAGE_SET_FILLORIGIN_OFFSET UNITYSDK_OFFSET(0x1DCD4080)
#define UNITYENGINE_UI_IMAGE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1DCD5970)
#define UNITYENGINE_UI_IMAGE_SET_OVERRIDESPRITE_OFFSET UNITYSDK_OFFSET(0x1DCD39C0)
#define UNITYENGINE_UI_IMAGE_SET_PIXELSPERUNITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1DCD5610)
#define UNITYENGINE_UI_IMAGE_SET_PRESERVEASPECT_OFFSET UNITYSDK_OFFSET(0x1DCD3BB0)
#define UNITYENGINE_UI_IMAGE_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0x1DCD2EC0)
#define UNITYENGINE_UI_IMAGE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DCD3A90)
#define UNITYENGINE_UI_IMAGE_SET_USESPRITEMESH_OFFSET UNITYSDK_OFFSET(0x1DCD4210)
#define UNITYENGINE_UI_IMAGE_TRACKIMAGE_OFFSET UNITYSDK_OFFSET(0x1DCDAD10)
#define UNITYENGINE_UI_IMAGE_TRACKSPRITE_OFFSET UNITYSDK_OFFSET(0x1DCD3550)
#define UNITYENGINE_UI_IMAGE_UNTRACKIMAGE_OFFSET UNITYSDK_OFFSET(0x1DCDAF70)
#define UNITYENGINE_UI_IMAGE_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1DCDB020)
#define UNITYENGINE_UI_IMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCDF120)
#define UNITYENGINE_UI_IMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD42E0)
#define UNITYENGINE_UI_IMAGE___BASE_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1DCDF330)
#define UNITYENGINE_UI_IMAGE___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DCDF2C0)
#define UNITYENGINE_UI_IMAGE___BASE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1DCDF320)
#define UNITYENGINE_UI_IMAGE___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1DCDF340)
#define UNITYENGINE_UI_IMAGE___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DCDF410)
#define UNITYENGINE_UI_IMAGE___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1DCDF4B0)
#define UNITYENGINE_UI_IMAGE___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DCDF4C0)
#define UNITYENGINE_UI_IMAGE___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1DCDF4D0)
#define UNITYENGINE_UI_IMAGE___BASE_REBUILD_OFFSET UNITYSDK_OFFSET(0x1DCDF4E0)
#define UNITYENGINE_UI_IMAGE___BASE_SETNATIVESIZE_OFFSET UNITYSDK_OFFSET(0x1DCDF4F0)
#define UNITYENGINE_UI_IMAGE___BASE_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1DCDF580)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Image_TypeDefinitionIndex = 18877;

	class Image : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_s_VertScratch()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x8A20);
		}
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_s_UV1Scratch()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x8A28);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Uv1()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x8A30);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Uv()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x8A38);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>** StaticGet_m_TrackedTexturelessImages()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x8A40);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Xy()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x8A48);
		}
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_s_UVScratch()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x8A50);
		}
		static ::UnityEngine::Material** StaticGet_s_ETC1DefaultUI()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x8A58);
		}
		static ::System::Int32* StaticGet_PropertyUVRatios()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x4420);
		}
		static ::System::Boolean* StaticGet_s_Initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x4424);
		}
		static ::UnityEngine::Vector3* StaticGet_s_DefaultNormal()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x4428);
		}
		static ::System::Int32* StaticGet_PropertyEffectTexUVSet()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x4434);
		}
		static ::UnityEngine::Vector4* StaticGet_s_DefaultTangent()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x4438);
		}
		::UnityEngine::Sprite* m_Sprite; // 0xF8
		::UnityEngine::Sprite* m_OverrideSprite; // 0x100
		::UnityEngine::UI::Image_Type m_Type; // 0x108
		::System::Boolean m_PreserveAspect; // 0x10C
		::System::Boolean m_FillCenter; // 0x10D
		::UnityEngine::UI::Image_FillMethod m_FillMethod; // 0x110
		::System::Single m_FillAmount; // 0x114
		::System::Boolean m_FillClockwise; // 0x118
		::System::Int32 m_FillOrigin; // 0x11C
		::System::Single m_AlphaHitTestMinimumThreshold; // 0x120
		::System::Boolean m_Tracked; // 0x124
		::System::Boolean m_UseSpriteMesh; // 0x125
		::System::Single m_PixelsPerUnitMultiplier; // 0x128
		::System::Boolean m_NormalizedUV1; // 0x12C
		::UnityEngine::UI::Graphic* m_Graphic; // 0x130
		::System::Single m_CachedReferencePixelsPerUnit; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE__CCTOR_OFFSET))();
		}

		::UnityEngine::Sprite* get_sprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_SPRITE_OFFSET))(this);
		}

		::System::Void set_sprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_SPRITE_OFFSET))(this, value);
		}

		::System::Void DisableSpriteOptimizations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_DISABLESPRITEOPTIMIZATIONS_OFFSET))(this);
		}

		::UnityEngine::Sprite* get_overrideSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_OVERRIDESPRITE_OFFSET))(this);
		}

		::System::Void set_overrideSprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_OVERRIDESPRITE_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_activeSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_ACTIVESPRITE_OFFSET))(this);
		}

		::UnityEngine::UI::Image_Type get_type()
		{
			return ((::UnityEngine::UI::Image_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::UI::Image_Type value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image_Type))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_TYPE_OFFSET))(this, value);
		}

		::System::Boolean get_preserveAspect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_PRESERVEASPECT_OFFSET))(this);
		}

		::System::Void set_preserveAspect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_PRESERVEASPECT_OFFSET))(this, value);
		}

		::System::Boolean get_fillCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_FILLCENTER_OFFSET))(this);
		}

		::System::Void set_fillCenter(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_FILLCENTER_OFFSET))(this, value);
		}

		::UnityEngine::UI::Image_FillMethod get_fillMethod()
		{
			return ((::UnityEngine::UI::Image_FillMethod(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_FILLMETHOD_OFFSET))(this);
		}

		::System::Void set_fillMethod(::UnityEngine::UI::Image_FillMethod value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image_FillMethod))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_FILLMETHOD_OFFSET))(this, value);
		}

		::System::Single get_fillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_fillAmount(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_FILLAMOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_fillClockwise()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_FILLCLOCKWISE_OFFSET))(this);
		}

		::System::Void set_fillClockwise(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_FILLCLOCKWISE_OFFSET))(this, value);
		}

		::System::Int32 get_fillOrigin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_FILLORIGIN_OFFSET))(this);
		}

		::System::Void set_fillOrigin(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_FILLORIGIN_OFFSET))(this, value);
		}

		::System::Single get_eventAlphaThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_EVENTALPHATHRESHOLD_OFFSET))(this);
		}

		::System::Void set_eventAlphaThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_EVENTALPHATHRESHOLD_OFFSET))(this, value);
		}

		::System::Single get_alphaHitTestMinimumThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_ALPHAHITTESTMINIMUMTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_alphaHitTestMinimumThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_ALPHAHITTESTMINIMUMTHRESHOLD_OFFSET))(this, value);
		}

		::System::Boolean get_useSpriteMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_USESPRITEMESH_OFFSET))(this);
		}

		::System::Void set_useSpriteMesh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_USESPRITEMESH_OFFSET))(this, value);
		}

		static ::UnityEngine::Material* get_defaultETC1GraphicMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_DEFAULTETC1GRAPHICMATERIAL_OFFSET))();
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Boolean get_hasBorder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_HASBORDER_OFFSET))(this);
		}

		::System::Boolean get_normalizedUV1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_NORMALIZEDUV1_OFFSET))(this);
		}

		::System::Void SetUpMaterialUV1Params(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SETUPMATERIALUV1PARAMS_OFFSET))(this, mat);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::UnityEngine::UI::Graphic* get_graphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_GRAPHIC_OFFSET))(this);
		}

		::System::Single get_pixelsPerUnitMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_PIXELSPERUNITMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_pixelsPerUnitMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_PIXELSPERUNITMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_pixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_PIXELSPERUNIT_OFFSET))(this);
		}

		::System::Single get_multipliedPixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_MULTIPLIEDPIXELSPERUNIT_OFFSET))(this);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_MATERIAL_OFFSET))(this, value);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void PreserveSpriteAspectRatio(::UnityEngine::Rect& rect, ::UnityEngine::Vector2 spriteSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_PRESERVESPRITEASPECTRATIO_OFFSET))(this, rect, spriteSize);
		}

		::UnityEngine::Vector4 GetDrawingDimensions(::System::Boolean shouldPreserveAspect)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GETDRAWINGDIMENSIONS_OFFSET))(this, shouldPreserveAspect);
		}

		::System::Void SetNativeSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SETNATIVESIZE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ONPOPULATEMESH_OFFSET))(this, toFill);
		}

		::System::Void TrackSprite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_TRACKSPRITE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void GenerateSimpleSprite(::UnityEngine::UI::VertexHelper* vh, ::System::Boolean lPreserveAspect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATESIMPLESPRITE_OFFSET))(this, vh, lPreserveAspect);
		}

		::System::Void GenerateSprite(::UnityEngine::UI::VertexHelper* vh, ::System::Boolean lPreserveAspect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATESPRITE_OFFSET))(this, vh, lPreserveAspect);
		}

		::System::Void GenerateSlicedSprite(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATESLICEDSPRITE_OFFSET))(this, toFill);
		}

		::System::Void GenerateTiledSprite(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATETILEDSPRITE_OFFSET))(this, toFill);
		}

		static ::System::Void AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::Il2CppArray<::UnityEngine::Vector3>* quadPositions, ::UnityEngine::Color32 color, ::Il2CppArray<::UnityEngine::Vector3>* quadUVs)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Color32, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ADDQUAD_OFFSET))(vertexHelper, quadPositions, color, quadUVs);
		}

		::System::Void AddQuadWithUV1(::UnityEngine::UI::VertexHelper* vertexHelper, ::Il2CppArray<::UnityEngine::Vector3>* quadPositions, ::UnityEngine::Color32 color, ::Il2CppArray<::UnityEngine::Vector3>* quadUVs, ::Il2CppArray<::UnityEngine::Vector3>* quadUV1s, ::UnityEngine::Rect r)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Color32, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ADDQUADWITHUV1_OFFSET))(this, vertexHelper, quadPositions, color, quadUVs, quadUV1s, r);
		}

		static ::System::Void AddQuad_1(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uvMin, ::UnityEngine::Vector2 uvMax)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ADDQUAD_1_OFFSET))(vertexHelper, posMin, posMax, color, uvMin, uvMax);
		}

		::System::Void AddQuadWithUV1_1(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uvMin, ::UnityEngine::Vector2 uvMax, ::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ADDQUADWITHUV1_1_OFFSET))(this, vertexHelper, posMin, posMax, color, uvMin, uvMax, rect);
		}

		::UnityEngine::Vector4 GetAdjustedBorders(::UnityEngine::Vector4 border, ::UnityEngine::Rect adjustedRect)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GETADJUSTEDBORDERS_OFFSET))(this, border, adjustedRect);
		}

		static ::System::Void ComputeUV1(::UnityEngine::Rect r, ::Il2CppArray<::UnityEngine::Vector3>* xy)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_COMPUTEUV1_OFFSET))(r, xy);
		}

		::System::Void GenerateFilledSprite(::UnityEngine::UI::VertexHelper* toFill, ::System::Boolean preserveAspect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATEFILLEDSPRITE_OFFSET))(this, toFill, preserveAspect);
		}

		static ::System::Boolean RadialCut(::Il2CppArray<::UnityEngine::Vector3>* xy, ::Il2CppArray<::UnityEngine::Vector3>* uv, ::System::Single fill, ::System::Boolean invert, ::System::Int32 corner)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_RADIALCUT_OFFSET))(xy, uv, fill, invert, corner);
		}

		static ::System::Void RadialCut_1(::Il2CppArray<::UnityEngine::Vector3>* xy, ::System::Single cos, ::System::Single sin, ::System::Boolean invert, ::System::Int32 corner)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_RADIALCUT_1_OFFSET))(xy, cos, sin, invert, corner);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* eventCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ISRAYCASTLOCATIONVALID_OFFSET))(this, screenPoint, eventCamera);
		}

		::UnityEngine::Vector2 MapCoordinate(::UnityEngine::Vector2 local, ::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_MAPCOORDINATE_OFFSET))(this, local, rect);
		}

		static ::System::Void RebuildImage(::UnityEngine::U2D::SpriteAtlas* spriteAtlas)
		{
			return ((::System::Void(*)(::UnityEngine::U2D::SpriteAtlas*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_REBUILDIMAGE_OFFSET))(spriteAtlas);
		}

		static ::System::Void TrackImage(::UnityEngine::UI::Image* g)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_TRACKIMAGE_OFFSET))(g);
		}

		static ::System::Void UnTrackImage(::UnityEngine::UI::Image* g)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_UNTRACKIMAGE_OFFSET))(g);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate update)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_REBUILD_OFFSET))(this, update);
		}

		::UnityEngine::Texture* __base_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE___BASE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Material* __base_get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE___BASE_GET_MATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* __base_GetModifiedMaterial(::UnityEngine::Material* P0)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE___BASE_GETMODIFIEDMATERIAL_OFFSET))(this, P0);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::System::Void __base_Rebuild(::UnityEngine::UI::CanvasUpdate P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE___BASE_REBUILD_OFFSET))(this, P0);
		}

		::System::Void __base_SetNativeSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE___BASE_SETNATIVESIZE_OFFSET))(this);
		}

		::System::Void __base_UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE___BASE_UPDATEMATERIAL_OFFSET))(this);
		}
	};
}
