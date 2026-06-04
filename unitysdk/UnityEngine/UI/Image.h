#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/ColorMode.h"
#include "unitysdk/UnityEngine/UI/Image_FillMethod.h"
#include "unitysdk/UnityEngine/UI/Image_ImageAnimState.h"
#include "unitysdk/UnityEngine/UI/Image_Type.h"
#include "unitysdk/UnityEngine/UI/Image___c__DisplayClass134_0.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/UI/SpriteElement.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::U2D { class SpriteAtlas; }
namespace UnityEngine::UI { class RampData; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_IMAGE_ADDQUAD_1_OFFSET UNITYSDK_OFFSET(0x1B3AE460)
#define UNITYENGINE_UI_IMAGE_ADDQUAD_OFFSET UNITYSDK_OFFSET(0x1B3AE660)
#define UNITYENGINE_UI_IMAGE_CACHESPRITEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1B3ADF70)
#define UNITYENGINE_UI_IMAGE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1B3AEF70)
#define UNITYENGINE_UI_IMAGE_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1B3AEF80)
#define UNITYENGINE_UI_IMAGE_CLEARSPRITEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1B3AC880)
#define UNITYENGINE_UI_IMAGE_DISABLESPRITEOPTIMIZATIONS_OFFSET UNITYSDK_OFFSET(0x1B3A3B10)
#define UNITYENGINE_UI_IMAGE_GENERATEFILLEDSPRITE_OFFSET UNITYSDK_OFFSET(0x1B3AA400)
#define UNITYENGINE_UI_IMAGE_GENERATEQUADSPRITE_OFFSET UNITYSDK_OFFSET(0x1B3A68C0)
#define UNITYENGINE_UI_IMAGE_GENERATESIMPLESPRITE_OFFSET UNITYSDK_OFFSET(0x1B3A6DE0)
#define UNITYENGINE_UI_IMAGE_GENERATESLICEDSPRITE_OFFSET UNITYSDK_OFFSET(0x1B3A7A10)
#define UNITYENGINE_UI_IMAGE_GENERATESPRITE_OFFSET UNITYSDK_OFFSET(0x1B3A7400)
#define UNITYENGINE_UI_IMAGE_GENERATETILEDSPRITE_OFFSET UNITYSDK_OFFSET(0x1B3A8B10)
#define UNITYENGINE_UI_IMAGE_GETADJUSTEDBORDERS_OFFSET UNITYSDK_OFFSET(0x1B3AE030)
#define UNITYENGINE_UI_IMAGE_GETDRAWINGDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x1B3A5A90)
#define UNITYENGINE_UI_IMAGE_GET_ACTIVESPRITE_OFFSET UNITYSDK_OFFSET(0x1B3A4000)
#define UNITYENGINE_UI_IMAGE_GET_ALPHAHITTESTMINIMUMTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1B3A4730)
#define UNITYENGINE_UI_IMAGE_GET_COLORLB_OFFSET UNITYSDK_OFFSET(0x1B3A5590)
#define UNITYENGINE_UI_IMAGE_GET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0x1B3A5390)
#define UNITYENGINE_UI_IMAGE_GET_COLORLT_OFFSET UNITYSDK_OFFSET(0x1B3A5490)
#define UNITYENGINE_UI_IMAGE_GET_COLORMODE_OFFSET UNITYSDK_OFFSET(0x1B3A5280)
#define UNITYENGINE_UI_IMAGE_GET_COLORRB_OFFSET UNITYSDK_OFFSET(0x1B3A5610)
#define UNITYENGINE_UI_IMAGE_GET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0x1B3A5410)
#define UNITYENGINE_UI_IMAGE_GET_COLORRT_OFFSET UNITYSDK_OFFSET(0x1B3A5510)
#define UNITYENGINE_UI_IMAGE_GET_DEFAULTETC1GRAPHICMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B3A4AB0)
#define UNITYENGINE_UI_IMAGE_GET_EVENTALPHATHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1B3A46F0)
#define UNITYENGINE_UI_IMAGE_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B3A4440)
#define UNITYENGINE_UI_IMAGE_GET_FILLCENTER_OFFSET UNITYSDK_OFFSET(0x1B3A4220)
#define UNITYENGINE_UI_IMAGE_GET_FILLCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1B3A44E0)
#define UNITYENGINE_UI_IMAGE_GET_FILLMETHOD_OFFSET UNITYSDK_OFFSET(0x1B3A4330)
#define UNITYENGINE_UI_IMAGE_GET_FILLORIGIN_OFFSET UNITYSDK_OFFSET(0x1B3A45F0)
#define UNITYENGINE_UI_IMAGE_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3AF420)
#define UNITYENGINE_UI_IMAGE_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3AF1D0)
#define UNITYENGINE_UI_IMAGE_GET_HASBORDER_OFFSET UNITYSDK_OFFSET(0x1B3A4FC0)
#define UNITYENGINE_UI_IMAGE_GET_ISLOOPANIMATION_OFFSET UNITYSDK_OFFSET(0x1B3B06D0)
#define UNITYENGINE_UI_IMAGE_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B3AF430)
#define UNITYENGINE_UI_IMAGE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B3A4B60)
#define UNITYENGINE_UI_IMAGE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1B3A4E80)
#define UNITYENGINE_UI_IMAGE_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3AF440)
#define UNITYENGINE_UI_IMAGE_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3AF450)
#define UNITYENGINE_UI_IMAGE_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3AF1E0)
#define UNITYENGINE_UI_IMAGE_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3AEF90)
#define UNITYENGINE_UI_IMAGE_GET_MULTIPLIEDPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B3A5160)
#define UNITYENGINE_UI_IMAGE_GET_OVERRIDESPRITE_OFFSET UNITYSDK_OFFSET(0x1B3A3B20)
#define UNITYENGINE_UI_IMAGE_GET_PIXELSPERUNITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1B3A5070)
#define UNITYENGINE_UI_IMAGE_GET_PIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B3A50A0)
#define UNITYENGINE_UI_IMAGE_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3AF1F0)
#define UNITYENGINE_UI_IMAGE_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3AEFA0)
#define UNITYENGINE_UI_IMAGE_GET_PRESERVEASPECT_OFFSET UNITYSDK_OFFSET(0x1B3A4110)
#define UNITYENGINE_UI_IMAGE_GET_QUADMESH_OFFSET UNITYSDK_OFFSET(0x1B3A6260)
#define UNITYENGINE_UI_IMAGE_GET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x1B3A5770)
#define UNITYENGINE_UI_IMAGE_GET_RAMPROTATION_OFFSET UNITYSDK_OFFSET(0x1B3A5690)
#define UNITYENGINE_UI_IMAGE_GET_RAMPSCALE_OFFSET UNITYSDK_OFFSET(0x1B3A5700)
#define UNITYENGINE_UI_IMAGE_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0x1B3A3B00)
#define UNITYENGINE_UI_IMAGE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B3A4020)
#define UNITYENGINE_UI_IMAGE_GET_USERENDERERCOLOR_OFFSET UNITYSDK_OFFSET(0x1B3A57E0)
#define UNITYENGINE_UI_IMAGE_GET_USESPRITEMESH_OFFSET UNITYSDK_OFFSET(0x1B3A4750)
#define UNITYENGINE_UI_IMAGE_ISHIDEBYSCALE_OFFSET UNITYSDK_OFFSET(0x1B3B07C0)
#define UNITYENGINE_UI_IMAGE_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1B3AF460)
#define UNITYENGINE_UI_IMAGE_MAPCOORDINATE_OFFSET UNITYSDK_OFFSET(0x1B3AFA90)
#define UNITYENGINE_UI_IMAGE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B3A5830)
#define UNITYENGINE_UI_IMAGE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B3A5820)
#define UNITYENGINE_UI_IMAGE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3ACF60)
#define UNITYENGINE_UI_IMAGE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B3B01A0)
#define UNITYENGINE_UI_IMAGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3AC9E0)
#define UNITYENGINE_UI_IMAGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B3AC8A0)
#define UNITYENGINE_UI_IMAGE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1B3A6530)
#define UNITYENGINE_UI_IMAGE_PRESERVESPRITEASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1B3A58A0)
#define UNITYENGINE_UI_IMAGE_RADIALCUT_1_OFFSET UNITYSDK_OFFSET(0x1B3AEA90)
#define UNITYENGINE_UI_IMAGE_RADIALCUT_OFFSET UNITYSDK_OFFSET(0x1B3AE980)
#define UNITYENGINE_UI_IMAGE_REBUILDIMAGE_OFFSET UNITYSDK_OFFSET(0x1B3AFEC0)
#define UNITYENGINE_UI_IMAGE_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x1B3ACD00)
#define UNITYENGINE_UI_IMAGE_SETNATIVESIZE_OFFSET UNITYSDK_OFFSET(0x1B3A5E10)
#define UNITYENGINE_UI_IMAGE_SET_ALPHAHITTESTMINIMUMTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1B3A4740)
#define UNITYENGINE_UI_IMAGE_SET_COLORLB_OFFSET UNITYSDK_OFFSET(0x1B3A55A0)
#define UNITYENGINE_UI_IMAGE_SET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0x1B3A53A0)
#define UNITYENGINE_UI_IMAGE_SET_COLORLT_OFFSET UNITYSDK_OFFSET(0x1B3A54A0)
#define UNITYENGINE_UI_IMAGE_SET_COLORMODE_OFFSET UNITYSDK_OFFSET(0x1B3A5290)
#define UNITYENGINE_UI_IMAGE_SET_COLORRB_OFFSET UNITYSDK_OFFSET(0x1B3A5620)
#define UNITYENGINE_UI_IMAGE_SET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0x1B3A5420)
#define UNITYENGINE_UI_IMAGE_SET_COLORRT_OFFSET UNITYSDK_OFFSET(0x1B3A5520)
#define UNITYENGINE_UI_IMAGE_SET_EVENTALPHATHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1B3A4710)
#define UNITYENGINE_UI_IMAGE_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B3A4450)
#define UNITYENGINE_UI_IMAGE_SET_FILLCENTER_OFFSET UNITYSDK_OFFSET(0x1B3A4230)
#define UNITYENGINE_UI_IMAGE_SET_FILLCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1B3A44F0)
#define UNITYENGINE_UI_IMAGE_SET_FILLMETHOD_OFFSET UNITYSDK_OFFSET(0x1B3A4340)
#define UNITYENGINE_UI_IMAGE_SET_FILLORIGIN_OFFSET UNITYSDK_OFFSET(0x1B3A4600)
#define UNITYENGINE_UI_IMAGE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1B3A5220)
#define UNITYENGINE_UI_IMAGE_SET_OVERRIDESPRITE_OFFSET UNITYSDK_OFFSET(0x1B3A3B40)
#define UNITYENGINE_UI_IMAGE_SET_PIXELSPERUNITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1B3A5080)
#define UNITYENGINE_UI_IMAGE_SET_PRESERVEASPECT_OFFSET UNITYSDK_OFFSET(0x1B3A4120)
#define UNITYENGINE_UI_IMAGE_SET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x1B3A5780)
#define UNITYENGINE_UI_IMAGE_SET_RAMPROTATION_OFFSET UNITYSDK_OFFSET(0x1B3A56A0)
#define UNITYENGINE_UI_IMAGE_SET_RAMPSCALE_OFFSET UNITYSDK_OFFSET(0x1B3A5710)
#define UNITYENGINE_UI_IMAGE_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0x1B38B0D0)
#define UNITYENGINE_UI_IMAGE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B3A4030)
#define UNITYENGINE_UI_IMAGE_SET_USERENDERERCOLOR_OFFSET UNITYSDK_OFFSET(0x1B3A5800)
#define UNITYENGINE_UI_IMAGE_SET_USESPRITEMESH_OFFSET UNITYSDK_OFFSET(0x1B3A4760)
#define UNITYENGINE_UI_IMAGE_SYNCANIMSTATE_OFFSET UNITYSDK_OFFSET(0x1B3B0170)
#define UNITYENGINE_UI_IMAGE_TRACKIMAGE_OFFSET UNITYSDK_OFFSET(0x1B3AC350)
#define UNITYENGINE_UI_IMAGE_TRACKSPRITE_OFFSET UNITYSDK_OFFSET(0x1B3A3C20)
#define UNITYENGINE_UI_IMAGE_UNTRACKIMAGE_OFFSET UNITYSDK_OFFSET(0x1B3ACC70)
#define UNITYENGINE_UI_IMAGE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B3AB6E0)
#define UNITYENGINE_UI_IMAGE_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B3ACDB0)
#define UNITYENGINE_UI_IMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3B0870)
#define UNITYENGINE_UI_IMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A4860)
#define UNITYENGINE_UI_IMAGE__TRACKSPRITE_G__STRETCHED_134_0_OFFSET UNITYSDK_OFFSET(0x1B3AC5B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Image_TypeDefinitionIndex = 5884;

	class Image : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Uv()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x466F0);
		}
		static ::UnityEngine::UI::VertexHelper** StaticGet_s_VertexHelper()
		{
			return (::UnityEngine::UI::VertexHelper**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x466F8);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Xy()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x46700);
		}
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_s_VertScratch()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x46708);
		}
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_s_UVScratch()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x46710);
		}
		static ::UnityEngine::Material** StaticGet_s_ETC1DefaultUI()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x46718);
		}
		static ::UnityEngine::Mesh** StaticGet_s_QuadMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x46720);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>** StaticGet_m_TrackedTexturelessImages()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x46728);
		}
		static ::System::Boolean* StaticGet_s_Initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0xCBC0);
		}
		::UnityEngine::Sprite* m_Sprite; // 0xF0
		::UnityEngine::Sprite* m_OverrideSprite; // 0xF8
		::UnityEngine::UI::Image_Type m_Type; // 0x100
		::System::Boolean m_PreserveAspect; // 0x104
		::System::Boolean m_FillCenter; // 0x105
		::UnityEngine::UI::Image_FillMethod m_FillMethod; // 0x108
		::System::Single m_FillAmount; // 0x10C
		::System::Boolean m_FillClockwise; // 0x110
		::System::Int32 m_FillOrigin; // 0x114
		::System::Single m_AlphaHitTestMinimumThreshold; // 0x118
		::System::Boolean m_Tracked; // 0x11C
		::UnityEngine::UI::SpriteElement m_RuntimeAtlasElement; // 0x120
		::UnityEngine::Vector2 uvScale; // 0x130
		::UnityEngine::Vector2 uvOffset; // 0x138
		::System::Boolean m_UseSpriteMesh; // 0x140
		::System::Single m_PixelsPerUnitMultiplier; // 0x144
		::System::Single m_CachedReferencePixelsPerUnit; // 0x148
		::UnityEngine::UI::ColorMode m_ColorMode; // 0x14C
		::UnityEngine::UI::RampData* m_RampData; // 0x150
		::UnityEngine::Color m_RampColorLeft; // 0x158
		::UnityEngine::Color m_RampColorRight; // 0x168
		::UnityEngine::Color m_4RampColorLB; // 0x178
		::UnityEngine::Color m_4RampColorRB; // 0x188
		::System::Single m_RampRotation; // 0x198
		::System::Single m_RampScale; // 0x19C
		::System::Single m_RampOffset; // 0x1A0
		::Il2CppArray<::UnityEngine::Vector2>* m_SpriteVertices; // 0x1A8
		::Il2CppArray<::UnityEngine::Vector2>* m_SpriteUvs; // 0x1B0
		::Il2CppArray<::System::UInt16>* m_SpriteTriangles; // 0x1B8
		::UnityEngine::UI::Image_ImageAnimState m_AnimState; // 0x1C0
		::System::Int32 m_AnimationDepth; // 0x1DC
		::System::Boolean m_IsLoopAnimation; // 0x1E0

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

		::System::Void set_sprite(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_SPRITE_OFFSET))(this, a1);
		}

		::System::Void DisableSpriteOptimizations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_DISABLESPRITEOPTIMIZATIONS_OFFSET))(this);
		}

		::UnityEngine::Sprite* get_overrideSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_OVERRIDESPRITE_OFFSET))(this);
		}

		::System::Void set_overrideSprite(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_OVERRIDESPRITE_OFFSET))(this, a1);
		}

		::UnityEngine::Sprite* get_activeSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_ACTIVESPRITE_OFFSET))(this);
		}

		::UnityEngine::UI::Image_Type get_type()
		{
			return ((::UnityEngine::UI::Image_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::UI::Image_Type a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image_Type))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_preserveAspect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_PRESERVEASPECT_OFFSET))(this);
		}

		::System::Void set_preserveAspect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_PRESERVEASPECT_OFFSET))(this, a1);
		}

		::System::Boolean get_fillCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_FILLCENTER_OFFSET))(this);
		}

		::System::Void set_fillCenter(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_FILLCENTER_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Image_FillMethod get_fillMethod()
		{
			return ((::UnityEngine::UI::Image_FillMethod(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_FILLMETHOD_OFFSET))(this);
		}

		::System::Void set_fillMethod(::UnityEngine::UI::Image_FillMethod a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image_FillMethod))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_FILLMETHOD_OFFSET))(this, a1);
		}

		::System::Single get_fillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_fillAmount(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_FILLAMOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_fillClockwise()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_FILLCLOCKWISE_OFFSET))(this);
		}

		::System::Void set_fillClockwise(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_FILLCLOCKWISE_OFFSET))(this, a1);
		}

		::System::Int32 get_fillOrigin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_FILLORIGIN_OFFSET))(this);
		}

		::System::Void set_fillOrigin(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_FILLORIGIN_OFFSET))(this, a1);
		}

		::System::Single get_eventAlphaThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_EVENTALPHATHRESHOLD_OFFSET))(this);
		}

		::System::Void set_eventAlphaThreshold(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_EVENTALPHATHRESHOLD_OFFSET))(this, a1);
		}

		::System::Single get_alphaHitTestMinimumThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_ALPHAHITTESTMINIMUMTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_alphaHitTestMinimumThreshold(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_ALPHAHITTESTMINIMUMTHRESHOLD_OFFSET))(this, a1);
		}

		::System::Boolean get_useSpriteMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_USESPRITEMESH_OFFSET))(this);
		}

		::System::Void set_useSpriteMesh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_USESPRITEMESH_OFFSET))(this, a1);
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

		::System::Single get_pixelsPerUnitMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_PIXELSPERUNITMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_pixelsPerUnitMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_PIXELSPERUNITMULTIPLIER_OFFSET))(this, a1);
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

		::System::Void set_material(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_MATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::UI::ColorMode get_colorMode()
		{
			return ((::UnityEngine::UI::ColorMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_COLORMODE_OFFSET))(this);
		}

		::System::Void set_colorMode(::UnityEngine::UI::ColorMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ColorMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_COLORMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorLeft()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_COLORLEFT_OFFSET))(this);
		}

		::System::Void set_colorLeft(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_COLORLEFT_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorRight()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_COLORRIGHT_OFFSET))(this);
		}

		::System::Void set_colorRight(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_COLORRIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorLT()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_COLORLT_OFFSET))(this);
		}

		::System::Void set_colorLT(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_COLORLT_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorRT()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_COLORRT_OFFSET))(this);
		}

		::System::Void set_colorRT(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_COLORRT_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorLB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_COLORLB_OFFSET))(this);
		}

		::System::Void set_colorLB(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_COLORLB_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorRB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_COLORRB_OFFSET))(this);
		}

		::System::Void set_colorRB(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_COLORRB_OFFSET))(this, a1);
		}

		::System::Single get_rampRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_RAMPROTATION_OFFSET))(this);
		}

		::System::Void set_rampRotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_RAMPROTATION_OFFSET))(this, a1);
		}

		::System::Single get_rampScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_RAMPSCALE_OFFSET))(this);
		}

		::System::Void set_rampScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_RAMPSCALE_OFFSET))(this, a1);
		}

		::System::Single get_rampOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_RAMPOFFSET_OFFSET))(this);
		}

		::System::Void set_rampOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_RAMPOFFSET_OFFSET))(this, a1);
		}

		::System::Boolean get_useRendererColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_USERENDERERCOLOR_OFFSET))(this);
		}

		::System::Void set_useRendererColor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_USERENDERERCOLOR_OFFSET))(this, a1);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void PreserveSpriteAspectRatio(::UnityEngine::Rect& a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_PRESERVESPRITEASPECTRATIO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 GetDrawingDimensions(::System::Boolean a1, ::UnityEngine::UI::VertexHelper* a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Boolean, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GETDRAWINGDIMENSIONS_OFFSET))(this, a1, a2);
		}

		::System::Void SetNativeSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SETNATIVESIZE_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* get_quadMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_QUADMESH_OFFSET))();
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_UPDATEGEOMETRY_OFFSET))(this);
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

		::System::Void SetMaterialDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SETMATERIALDIRTY_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void GenerateQuadSprite(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATEQUADSPRITE_OFFSET))(this, a1);
		}

		::System::Void GenerateSimpleSprite(::UnityEngine::UI::VertexHelper* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATESIMPLESPRITE_OFFSET))(this, a1, a2);
		}

		::System::Void GenerateSprite(::UnityEngine::UI::VertexHelper* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATESPRITE_OFFSET))(this, a1, a2);
		}

		::System::Void CacheSpriteVertexData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_CACHESPRITEVERTEXDATA_OFFSET))(this);
		}

		::System::Void ClearSpriteVertexData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_CLEARSPRITEVERTEXDATA_OFFSET))(this);
		}

		::System::Void GenerateSlicedSprite(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATESLICEDSPRITE_OFFSET))(this, a1);
		}

		::System::Void GenerateTiledSprite(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATETILEDSPRITE_OFFSET))(this, a1);
		}

		static ::System::Void AddQuad(::UnityEngine::UI::VertexHelper* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::UnityEngine::Color32 a3, ::Il2CppArray<::UnityEngine::Vector3>* a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Color32, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ADDQUAD_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void AddQuad_1(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Color32 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ADDQUAD_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Vector4 GetAdjustedBorders(::UnityEngine::Vector4 a1, ::UnityEngine::Rect a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GETADJUSTEDBORDERS_OFFSET))(this, a1, a2);
		}

		::System::Void GenerateFilledSprite(::UnityEngine::UI::VertexHelper* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATEFILLEDSPRITE_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean RadialCut(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::System::Single a3, ::System::Boolean a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_RADIALCUT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void RadialCut_1(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_RADIALCUT_1_OFFSET))(a1, a2, a3, a4, a5);
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

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ISRAYCASTLOCATIONVALID_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 MapCoordinate(::UnityEngine::Vector2 a1, ::UnityEngine::Rect a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_MAPCOORDINATE_OFFSET))(this, a1, a2);
		}

		static ::System::Void RebuildImage(::UnityEngine::U2D::SpriteAtlas* a1)
		{
			return ((::System::Void(*)(::UnityEngine::U2D::SpriteAtlas*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_REBUILDIMAGE_OFFSET))(a1);
		}

		static ::System::Void TrackImage(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_TRACKIMAGE_OFFSET))(a1);
		}

		static ::System::Void UnTrackImage(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_UNTRACKIMAGE_OFFSET))(a1);
		}

		::System::Void SyncAnimState(::UnityEngine::UI::Image_ImageAnimState& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image_ImageAnimState&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SYNCANIMSTATE_OFFSET))(this, a1);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Boolean get_IsLoopAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_ISLOOPANIMATION_OFFSET))(this);
		}

		::System::Boolean IsHideByScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ISHIDEBYSCALE_OFFSET))(this);
		}

		::System::Boolean _TrackSprite_g__Stretched_134_0(::UnityEngine::UI::Image___c__DisplayClass134_0& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Image___c__DisplayClass134_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE__TRACKSPRITE_G__STRETCHED_134_0_OFFSET))(this, a1);
		}
	};
}
