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

#define UNITYENGINE_UI_IMAGE_ADDQUAD_1_OFFSET UNITYSDK_OFFSET(0x18B26420)
#define UNITYENGINE_UI_IMAGE_ADDQUAD_OFFSET UNITYSDK_OFFSET(0x18B26610)
#define UNITYENGINE_UI_IMAGE_CACHESPRITEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x18B25F20)
#define UNITYENGINE_UI_IMAGE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18B270A0)
#define UNITYENGINE_UI_IMAGE_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x18B270B0)
#define UNITYENGINE_UI_IMAGE_CLEARSPRITEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x18B24850)
#define UNITYENGINE_UI_IMAGE_DISABLESPRITEOPTIMIZATIONS_OFFSET UNITYSDK_OFFSET(0x18B1B9D0)
#define UNITYENGINE_UI_IMAGE_GENERATEFILLEDSPRITE_OFFSET UNITYSDK_OFFSET(0x18B22340)
#define UNITYENGINE_UI_IMAGE_GENERATEQUADSPRITE_OFFSET UNITYSDK_OFFSET(0x18B1E630)
#define UNITYENGINE_UI_IMAGE_GENERATESIMPLESPRITE_OFFSET UNITYSDK_OFFSET(0x18B1EB50)
#define UNITYENGINE_UI_IMAGE_GENERATESLICEDSPRITE_OFFSET UNITYSDK_OFFSET(0x18B1F7D0)
#define UNITYENGINE_UI_IMAGE_GENERATESPRITE_OFFSET UNITYSDK_OFFSET(0x18B1F170)
#define UNITYENGINE_UI_IMAGE_GENERATETILEDSPRITE_OFFSET UNITYSDK_OFFSET(0x18B20A60)
#define UNITYENGINE_UI_IMAGE_GETADJUSTEDBORDERS_OFFSET UNITYSDK_OFFSET(0x18B25FE0)
#define UNITYENGINE_UI_IMAGE_GETDRAWINGDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x18B1D7F0)
#define UNITYENGINE_UI_IMAGE_GET_ACTIVESPRITE_OFFSET UNITYSDK_OFFSET(0x18B1BED0)
#define UNITYENGINE_UI_IMAGE_GET_ALPHAHITTESTMINIMUMTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18B1C5A0)
#define UNITYENGINE_UI_IMAGE_GET_COLORLB_OFFSET UNITYSDK_OFFSET(0x18B1D310)
#define UNITYENGINE_UI_IMAGE_GET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0x18B1D150)
#define UNITYENGINE_UI_IMAGE_GET_COLORLT_OFFSET UNITYSDK_OFFSET(0x18B1D230)
#define UNITYENGINE_UI_IMAGE_GET_COLORMODE_OFFSET UNITYSDK_OFFSET(0x18B1D0E0)
#define UNITYENGINE_UI_IMAGE_GET_COLORRB_OFFSET UNITYSDK_OFFSET(0x18B1D380)
#define UNITYENGINE_UI_IMAGE_GET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0x18B1D1C0)
#define UNITYENGINE_UI_IMAGE_GET_COLORRT_OFFSET UNITYSDK_OFFSET(0x18B1D2A0)
#define UNITYENGINE_UI_IMAGE_GET_DEFAULTETC1GRAPHICMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B1C910)
#define UNITYENGINE_UI_IMAGE_GET_EVENTALPHATHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18B1C560)
#define UNITYENGINE_UI_IMAGE_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x18B1C290)
#define UNITYENGINE_UI_IMAGE_GET_FILLCENTER_OFFSET UNITYSDK_OFFSET(0x18B1C0B0)
#define UNITYENGINE_UI_IMAGE_GET_FILLCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x18B1C390)
#define UNITYENGINE_UI_IMAGE_GET_FILLMETHOD_OFFSET UNITYSDK_OFFSET(0x18B1C180)
#define UNITYENGINE_UI_IMAGE_GET_FILLORIGIN_OFFSET UNITYSDK_OFFSET(0x18B1C460)
#define UNITYENGINE_UI_IMAGE_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B27550)
#define UNITYENGINE_UI_IMAGE_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x18B27300)
#define UNITYENGINE_UI_IMAGE_GET_HASBORDER_OFFSET UNITYSDK_OFFSET(0x18B1CE20)
#define UNITYENGINE_UI_IMAGE_GET_ISLOOPANIMATION_OFFSET UNITYSDK_OFFSET(0x18B287E0)
#define UNITYENGINE_UI_IMAGE_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x18B27560)
#define UNITYENGINE_UI_IMAGE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x18B1C9C0)
#define UNITYENGINE_UI_IMAGE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x18B1CCE0)
#define UNITYENGINE_UI_IMAGE_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B27570)
#define UNITYENGINE_UI_IMAGE_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x18B27580)
#define UNITYENGINE_UI_IMAGE_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B27310)
#define UNITYENGINE_UI_IMAGE_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x18B270C0)
#define UNITYENGINE_UI_IMAGE_GET_MULTIPLIEDPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x18B1CFC0)
#define UNITYENGINE_UI_IMAGE_GET_OVERRIDESPRITE_OFFSET UNITYSDK_OFFSET(0x18B1B9E0)
#define UNITYENGINE_UI_IMAGE_GET_PIXELSPERUNITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x18B1CED0)
#define UNITYENGINE_UI_IMAGE_GET_PIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x18B1CF00)
#define UNITYENGINE_UI_IMAGE_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B27320)
#define UNITYENGINE_UI_IMAGE_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x18B270D0)
#define UNITYENGINE_UI_IMAGE_GET_PRESERVEASPECT_OFFSET UNITYSDK_OFFSET(0x18B1BFE0)
#define UNITYENGINE_UI_IMAGE_GET_QUADMESH_OFFSET UNITYSDK_OFFSET(0x18B1DFD0)
#define UNITYENGINE_UI_IMAGE_GET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x18B1D4D0)
#define UNITYENGINE_UI_IMAGE_GET_RAMPROTATION_OFFSET UNITYSDK_OFFSET(0x18B1D3F0)
#define UNITYENGINE_UI_IMAGE_GET_RAMPSCALE_OFFSET UNITYSDK_OFFSET(0x18B1D460)
#define UNITYENGINE_UI_IMAGE_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0x18B1B9C0)
#define UNITYENGINE_UI_IMAGE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18B1BEF0)
#define UNITYENGINE_UI_IMAGE_GET_USERENDERERCOLOR_OFFSET UNITYSDK_OFFSET(0x18B1D540)
#define UNITYENGINE_UI_IMAGE_GET_USESPRITEMESH_OFFSET UNITYSDK_OFFSET(0x18B1C5C0)
#define UNITYENGINE_UI_IMAGE_ISHIDEBYSCALE_OFFSET UNITYSDK_OFFSET(0x18B288D0)
#define UNITYENGINE_UI_IMAGE_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x18B27590)
#define UNITYENGINE_UI_IMAGE_MAPCOORDINATE_OFFSET UNITYSDK_OFFSET(0x18B27BC0)
#define UNITYENGINE_UI_IMAGE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18B1D590)
#define UNITYENGINE_UI_IMAGE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18B1D580)
#define UNITYENGINE_UI_IMAGE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x18B24F20)
#define UNITYENGINE_UI_IMAGE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18B282B0)
#define UNITYENGINE_UI_IMAGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18B249B0)
#define UNITYENGINE_UI_IMAGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18B24870)
#define UNITYENGINE_UI_IMAGE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x18B1E2A0)
#define UNITYENGINE_UI_IMAGE_PRESERVESPRITEASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x18B1D5F0)
#define UNITYENGINE_UI_IMAGE_RADIALCUT_1_OFFSET UNITYSDK_OFFSET(0x18B26A50)
#define UNITYENGINE_UI_IMAGE_RADIALCUT_OFFSET UNITYSDK_OFFSET(0x18B26940)
#define UNITYENGINE_UI_IMAGE_REBUILDIMAGE_OFFSET UNITYSDK_OFFSET(0x18B27FF0)
#define UNITYENGINE_UI_IMAGE_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x18B24CD0)
#define UNITYENGINE_UI_IMAGE_SETNATIVESIZE_OFFSET UNITYSDK_OFFSET(0x18B1DB70)
#define UNITYENGINE_UI_IMAGE_SET_ALPHAHITTESTMINIMUMTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18B1C5B0)
#define UNITYENGINE_UI_IMAGE_SET_COLORLB_OFFSET UNITYSDK_OFFSET(0x18B1D320)
#define UNITYENGINE_UI_IMAGE_SET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0x18B1D160)
#define UNITYENGINE_UI_IMAGE_SET_COLORLT_OFFSET UNITYSDK_OFFSET(0x18B1D240)
#define UNITYENGINE_UI_IMAGE_SET_COLORMODE_OFFSET UNITYSDK_OFFSET(0x18B1D0F0)
#define UNITYENGINE_UI_IMAGE_SET_COLORRB_OFFSET UNITYSDK_OFFSET(0x18B1D390)
#define UNITYENGINE_UI_IMAGE_SET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0x18B1D1D0)
#define UNITYENGINE_UI_IMAGE_SET_COLORRT_OFFSET UNITYSDK_OFFSET(0x18B1D2B0)
#define UNITYENGINE_UI_IMAGE_SET_EVENTALPHATHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18B1C580)
#define UNITYENGINE_UI_IMAGE_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x18B1C2A0)
#define UNITYENGINE_UI_IMAGE_SET_FILLCENTER_OFFSET UNITYSDK_OFFSET(0x18B1C0C0)
#define UNITYENGINE_UI_IMAGE_SET_FILLCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x18B1C3A0)
#define UNITYENGINE_UI_IMAGE_SET_FILLMETHOD_OFFSET UNITYSDK_OFFSET(0x18B1C190)
#define UNITYENGINE_UI_IMAGE_SET_FILLORIGIN_OFFSET UNITYSDK_OFFSET(0x18B1C470)
#define UNITYENGINE_UI_IMAGE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x18B1D080)
#define UNITYENGINE_UI_IMAGE_SET_OVERRIDESPRITE_OFFSET UNITYSDK_OFFSET(0x18B1BA00)
#define UNITYENGINE_UI_IMAGE_SET_PIXELSPERUNITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x18B1CEE0)
#define UNITYENGINE_UI_IMAGE_SET_PRESERVEASPECT_OFFSET UNITYSDK_OFFSET(0x18B1BFF0)
#define UNITYENGINE_UI_IMAGE_SET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x18B1D4E0)
#define UNITYENGINE_UI_IMAGE_SET_RAMPROTATION_OFFSET UNITYSDK_OFFSET(0x18B1D400)
#define UNITYENGINE_UI_IMAGE_SET_RAMPSCALE_OFFSET UNITYSDK_OFFSET(0x18B1D470)
#define UNITYENGINE_UI_IMAGE_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0x18B040D0)
#define UNITYENGINE_UI_IMAGE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x18B1BF00)
#define UNITYENGINE_UI_IMAGE_SET_USERENDERERCOLOR_OFFSET UNITYSDK_OFFSET(0x18B1D560)
#define UNITYENGINE_UI_IMAGE_SET_USESPRITEMESH_OFFSET UNITYSDK_OFFSET(0x18B1C5D0)
#define UNITYENGINE_UI_IMAGE_SYNCANIMSTATE_OFFSET UNITYSDK_OFFSET(0x18B28280)
#define UNITYENGINE_UI_IMAGE_TRACKIMAGE_OFFSET UNITYSDK_OFFSET(0x18B243B0)
#define UNITYENGINE_UI_IMAGE_TRACKSPRITE_OFFSET UNITYSDK_OFFSET(0x18B1BAE0)
#define UNITYENGINE_UI_IMAGE_UNTRACKIMAGE_OFFSET UNITYSDK_OFFSET(0x18B24C40)
#define UNITYENGINE_UI_IMAGE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x18B23840)
#define UNITYENGINE_UI_IMAGE_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B24D70)
#define UNITYENGINE_UI_IMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B28980)
#define UNITYENGINE_UI_IMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B1C690)
#define UNITYENGINE_UI_IMAGE__TRACKSPRITE_G__STRETCHED_134_0_OFFSET UNITYSDK_OFFSET(0x18B24580)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Image_TypeDefinitionIndex = 5595;

	class Image : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::UnityEngine::Material** StaticGet_s_ETC1DefaultUI()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x54E0);
		}
		static ::UnityEngine::UI::VertexHelper** StaticGet_s_VertexHelper()
		{
			return (::UnityEngine::UI::VertexHelper**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x54E8);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Xy()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x54F0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>** StaticGet_m_TrackedTexturelessImages()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x54F8);
		}
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_s_UVScratch()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x5500);
		}
		static ::UnityEngine::Mesh** StaticGet_s_QuadMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x5508);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Uv()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x5510);
		}
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_s_VertScratch()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x5518);
		}
		static ::System::Boolean* StaticGet_s_Initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Image_TypeDefinitionIndex)->GetStaticField(0x2CA0);
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

		::UnityEngine::UI::ColorMode get_colorMode()
		{
			return ((::UnityEngine::UI::ColorMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_COLORMODE_OFFSET))(this);
		}

		::System::Void set_colorMode(::UnityEngine::UI::ColorMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ColorMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_COLORMODE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorLeft()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_COLORLEFT_OFFSET))(this);
		}

		::System::Void set_colorLeft(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_COLORLEFT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorRight()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_COLORRIGHT_OFFSET))(this);
		}

		::System::Void set_colorRight(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_COLORRIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorLT()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_COLORLT_OFFSET))(this);
		}

		::System::Void set_colorLT(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_COLORLT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorRT()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_COLORRT_OFFSET))(this);
		}

		::System::Void set_colorRT(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_COLORRT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorLB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_COLORLB_OFFSET))(this);
		}

		::System::Void set_colorLB(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_COLORLB_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorRB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_COLORRB_OFFSET))(this);
		}

		::System::Void set_colorRB(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_COLORRB_OFFSET))(this, value);
		}

		::System::Single get_rampRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_RAMPROTATION_OFFSET))(this);
		}

		::System::Void set_rampRotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_RAMPROTATION_OFFSET))(this, value);
		}

		::System::Single get_rampScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_RAMPSCALE_OFFSET))(this);
		}

		::System::Void set_rampScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_RAMPSCALE_OFFSET))(this, value);
		}

		::System::Single get_rampOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_RAMPOFFSET_OFFSET))(this);
		}

		::System::Void set_rampOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_RAMPOFFSET_OFFSET))(this, value);
		}

		::System::Boolean get_useRendererColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_USERENDERERCOLOR_OFFSET))(this);
		}

		::System::Void set_useRendererColor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SET_USERENDERERCOLOR_OFFSET))(this, value);
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

		::UnityEngine::Vector4 GetDrawingDimensions(::System::Boolean shouldPreserveAspect, ::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Boolean, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GETDRAWINGDIMENSIONS_OFFSET))(this, shouldPreserveAspect, vh);
		}

		::System::Void SetNativeSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SETNATIVESIZE_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* get_quadMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_QUADMESH_OFFSET))();
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ONPOPULATEMESH_OFFSET))(this, toFill);
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

		::System::Void GenerateQuadSprite(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATEQUADSPRITE_OFFSET))(this, vh);
		}

		::System::Void GenerateSimpleSprite(::UnityEngine::UI::VertexHelper* vh, ::System::Boolean lPreserveAspect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATESIMPLESPRITE_OFFSET))(this, vh, lPreserveAspect);
		}

		::System::Void GenerateSprite(::UnityEngine::UI::VertexHelper* vh, ::System::Boolean lPreserveAspect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATESPRITE_OFFSET))(this, vh, lPreserveAspect);
		}

		::System::Void CacheSpriteVertexData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_CACHESPRITEVERTEXDATA_OFFSET))(this);
		}

		::System::Void ClearSpriteVertexData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_CLEARSPRITEVERTEXDATA_OFFSET))(this);
		}

		::System::Void GenerateSlicedSprite(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATESLICEDSPRITE_OFFSET))(this, toFill);
		}

		::System::Void GenerateTiledSprite(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GENERATETILEDSPRITE_OFFSET))(this, toFill);
		}

		static ::System::Void AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::Il2CppArray<::UnityEngine::Vector3>* quadPositions, ::UnityEngine::Color32 color, ::Il2CppArray<::UnityEngine::Vector3>* quadUVs, ::UnityEngine::Vector2 uvScale, ::UnityEngine::Vector2 uvOffset)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Color32, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ADDQUAD_OFFSET))(vertexHelper, quadPositions, color, quadUVs, uvScale, uvOffset);
		}

		static ::System::Void AddQuad_1(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uvMin, ::UnityEngine::Vector2 uvMax)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_ADDQUAD_1_OFFSET))(vertexHelper, posMin, posMax, color, uvMin, uvMax);
		}

		::UnityEngine::Vector4 GetAdjustedBorders(::UnityEngine::Vector4 border, ::UnityEngine::Rect adjustedRect)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GETADJUSTEDBORDERS_OFFSET))(this, border, adjustedRect);
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

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_GET_MAXWIDTH_OFFSET))(this);
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

		::System::Void SyncAnimState(::UnityEngine::UI::Image_ImageAnimState& animState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image_ImageAnimState&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGE_SYNCANIMSTATE_OFFSET))(this, animState);
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
