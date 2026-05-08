#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/UI/SmoothMaskMaterial_Params.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_FillOriginHorizontal.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_FillOriginRadial.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_FillOriginRadial90.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_FillOriginVertical.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_FillType.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_SoftRangeType.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_Type.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_UI_SMOOTHMASK_CACHEROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x1C169B70)
#define UNITYENGINE_UI_SMOOTHMASK_GET_CANVASTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C169EE0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_DOWNSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1C1690F0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_DOWNSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1C168D90)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C1694B0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1C1697E0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1C169560)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINRADIAL90_OFFSET UNITYSDK_OFFSET(0x1C169740)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINRADIAL_OFFSET UNITYSDK_OFFSET(0x1C1696A0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINVERTICAL_OFFSET UNITYSDK_OFFSET(0x1C169600)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLTYPE_OFFSET UNITYSDK_OFFSET(0x1C169410)
#define UNITYENGINE_UI_SMOOTHMASK_GET_INVERT_OFFSET UNITYSDK_OFFSET(0x1C169880)
#define UNITYENGINE_UI_SMOOTHMASK_GET_LEFTSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1C169190)
#define UNITYENGINE_UI_SMOOTHMASK_GET_LEFTSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1C168E40)
#define UNITYENGINE_UI_SMOOTHMASK_GET_RADIALSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1C169370)
#define UNITYENGINE_UI_SMOOTHMASK_GET_RADIALSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1C168FA0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C169920)
#define UNITYENGINE_UI_SMOOTHMASK_GET_RIGHTSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1C169230)
#define UNITYENGINE_UI_SMOOTHMASK_GET_RIGHTSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1C168EF0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_ROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x1C169A00)
#define UNITYENGINE_UI_SMOOTHMASK_GET_SOFTRANGETYPE_OFFSET UNITYSDK_OFFSET(0x1C168C40)
#define UNITYENGINE_UI_SMOOTHMASK_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1C168B50)
#define UNITYENGINE_UI_SMOOTHMASK_GET_TOPSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1C169050)
#define UNITYENGINE_UI_SMOOTHMASK_GET_TOPSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1C168CE0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C168A60)
#define UNITYENGINE_UI_SMOOTHMASK_GET_USEACTUALPIXELS_OFFSET UNITYSDK_OFFSET(0x1C1692D0)
#define UNITYENGINE_UI_SMOOTHMASK_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1C16B2B0)
#define UNITYENGINE_UI_SMOOTHMASK_MASKENABLED_OFFSET UNITYSDK_OFFSET(0x1C16A150)
#define UNITYENGINE_UI_SMOOTHMASK_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C16A340)
#define UNITYENGINE_UI_SMOOTHMASK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C16A2C0)
#define UNITYENGINE_UI_SMOOTHMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C16A200)
#define UNITYENGINE_UI_SMOOTHMASK_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1C16B470)
#define UNITYENGINE_UI_SMOOTHMASK_ONSIBLINGGRAPHICENABLEDDISABLED_OFFSET UNITYSDK_OFFSET(0x1C16A1C0)
#define UNITYENGINE_UI_SMOOTHMASK_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1C16A4C0)
#define UNITYENGINE_UI_SMOOTHMASK_REBUILD_OFFSET UNITYSDK_OFFSET(0x1C16B4D0)
#define UNITYENGINE_UI_SMOOTHMASK_RECALCULATEPARAMS_OFFSET UNITYSDK_OFFSET(0x1C16A8C0)
#define UNITYENGINE_UI_SMOOTHMASK_SETPARAMSDIRTY_OFFSET UNITYSDK_OFFSET(0x1C168B00)
#define UNITYENGINE_UI_SMOOTHMASK_SET_DOWNSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1C169100)
#define UNITYENGINE_UI_SMOOTHMASK_SET_DOWNSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1C168DA0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C1694C0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1C1697F0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1C169570)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINRADIAL90_OFFSET UNITYSDK_OFFSET(0x1C169750)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINRADIAL_OFFSET UNITYSDK_OFFSET(0x1C1696B0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINVERTICAL_OFFSET UNITYSDK_OFFSET(0x1C169610)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLTYPE_OFFSET UNITYSDK_OFFSET(0x1C169420)
#define UNITYENGINE_UI_SMOOTHMASK_SET_INVERT_OFFSET UNITYSDK_OFFSET(0x1C169890)
#define UNITYENGINE_UI_SMOOTHMASK_SET_LEFTSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1C1691A0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_LEFTSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1C168E50)
#define UNITYENGINE_UI_SMOOTHMASK_SET_RADIALSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1C169380)
#define UNITYENGINE_UI_SMOOTHMASK_SET_RADIALSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1C168FB0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_RIGHTSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1C169240)
#define UNITYENGINE_UI_SMOOTHMASK_SET_RIGHTSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1C168F00)
#define UNITYENGINE_UI_SMOOTHMASK_SET_SOFTRANGETYPE_OFFSET UNITYSDK_OFFSET(0x1C168C50)
#define UNITYENGINE_UI_SMOOTHMASK_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1C168B60)
#define UNITYENGINE_UI_SMOOTHMASK_SET_TOPSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1C169060)
#define UNITYENGINE_UI_SMOOTHMASK_SET_TOPSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1C168CF0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C168A70)
#define UNITYENGINE_UI_SMOOTHMASK_SET_USEACTUALPIXELS_OFFSET UNITYSDK_OFFSET(0x1C1692E0)
#define UNITYENGINE_UI_SMOOTHMASK_TRANSFORMPOINTS_OFFSET UNITYSDK_OFFSET(0x1C16A510)
#define UNITYENGINE_UI_SMOOTHMASK_UPDATEROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x1C16A390)
#define UNITYENGINE_UI_SMOOTHMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C16A050)
#define UNITYENGINE_UI_SMOOTHMASK___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C16BAC0)
#define UNITYENGINE_UI_SMOOTHMASK___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C16BB50)
#define UNITYENGINE_UI_SMOOTHMASK___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C16BBE0)
#define UNITYENGINE_UI_SMOOTHMASK___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1C16BC70)
#define UNITYENGINE_UI_SMOOTHMASK___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1C16BD00)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SmoothMask_TypeDefinitionIndex = 8449;

	class SmoothMask : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::UI::SmoothMask_Type m_Type; // 0x18
		::System::Boolean m_ForceUpdateChild; // 0x1C
		::UnityEngine::Texture* m_Texture; // 0x20
		::UnityEngine::UI::SmoothMask_SoftRangeType m_SoftRangeType; // 0x28
		::System::Single m_TopSoftRange; // 0x2C
		::System::Single m_DownSoftRange; // 0x30
		::System::Single m_LeftSoftRange; // 0x34
		::System::Single m_RightSoftRange; // 0x38
		::System::Single m_RadialSoftRange; // 0x3C
		::System::Int32 m_TopSoftPixel; // 0x40
		::System::Int32 m_DownSoftPixel; // 0x44
		::System::Int32 m_LeftSoftPixel; // 0x48
		::System::Int32 m_RightSoftPixel; // 0x4C
		::System::Boolean m_UseActualPixels; // 0x50
		::System::Int32 m_RadialSoftPixel; // 0x54
		::UnityEngine::UI::SmoothMask_FillType m_FillType; // 0x58
		::System::Single m_FillAmount; // 0x5C
		::UnityEngine::UI::SmoothMask_FillOriginHorizontal m_FillOriginHorizontal; // 0x60
		::UnityEngine::UI::SmoothMask_FillOriginVertical m_FillOriginVertical; // 0x64
		::UnityEngine::UI::SmoothMask_FillOriginRadial m_FillOriginRadial; // 0x68
		::UnityEngine::UI::SmoothMask_FillOriginRadial90 m_FillOriginRadial90; // 0x6C
		::System::Boolean m_FillClockwise; // 0x70
		::System::Boolean m_Invert; // 0x71
		::UnityEngine::RectTransform* m_RectTransform; // 0x78
		::UnityEngine::UI::SmoothMaskMaterial_Params materialParams; // 0x80
		::System::Boolean m_MaterialParamsDirty; // 0xF8
		::UnityEngine::Canvas* m_RootCanvas; // 0x100
		::UnityEngine::RectTransform* m_CanvasTransform; // 0x108
		::Il2CppArray<::UnityEngine::Vector3>* _Corners; // 0x110
		::UnityEngine::Matrix4x4 thisOldMatrix; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::SmoothMask_Type get_type()
		{
			return ((::UnityEngine::UI::SmoothMask_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::UI::SmoothMask_Type value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_Type))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_TYPE_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_TEXTURE_OFFSET))(this);
		}

		::System::Void set_texture(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_TEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::UI::SmoothMask_SoftRangeType get_softRangeType()
		{
			return ((::UnityEngine::UI::SmoothMask_SoftRangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_SOFTRANGETYPE_OFFSET))(this);
		}

		::System::Void set_softRangeType(::UnityEngine::UI::SmoothMask_SoftRangeType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_SoftRangeType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_SOFTRANGETYPE_OFFSET))(this, value);
		}

		::System::Single get_topSoftRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_TOPSOFTRANGE_OFFSET))(this);
		}

		::System::Void set_topSoftRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_TOPSOFTRANGE_OFFSET))(this, value);
		}

		::System::Single get_downSoftRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_DOWNSOFTRANGE_OFFSET))(this);
		}

		::System::Void set_downSoftRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_DOWNSOFTRANGE_OFFSET))(this, value);
		}

		::System::Single get_leftSoftRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_LEFTSOFTRANGE_OFFSET))(this);
		}

		::System::Void set_leftSoftRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_LEFTSOFTRANGE_OFFSET))(this, value);
		}

		::System::Single get_rightSoftRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_RIGHTSOFTRANGE_OFFSET))(this);
		}

		::System::Void set_rightSoftRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_RIGHTSOFTRANGE_OFFSET))(this, value);
		}

		::System::Single get_radialSoftRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_RADIALSOFTRANGE_OFFSET))(this);
		}

		::System::Void set_radialSoftRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_RADIALSOFTRANGE_OFFSET))(this, value);
		}

		::System::Int32 get_topSoftPixel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_TOPSOFTPIXEL_OFFSET))(this);
		}

		::System::Void set_topSoftPixel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_TOPSOFTPIXEL_OFFSET))(this, value);
		}

		::System::Int32 get_downSoftPixel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_DOWNSOFTPIXEL_OFFSET))(this);
		}

		::System::Void set_downSoftPixel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_DOWNSOFTPIXEL_OFFSET))(this, value);
		}

		::System::Int32 get_leftSoftPixel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_LEFTSOFTPIXEL_OFFSET))(this);
		}

		::System::Void set_leftSoftPixel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_LEFTSOFTPIXEL_OFFSET))(this, value);
		}

		::System::Int32 get_rightSoftPixel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_RIGHTSOFTPIXEL_OFFSET))(this);
		}

		::System::Void set_rightSoftPixel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_RIGHTSOFTPIXEL_OFFSET))(this, value);
		}

		::System::Boolean get_useActualPixels()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_USEACTUALPIXELS_OFFSET))(this);
		}

		::System::Void set_useActualPixels(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_USEACTUALPIXELS_OFFSET))(this, value);
		}

		::System::Int32 get_radialSoftPixel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_RADIALSOFTPIXEL_OFFSET))(this);
		}

		::System::Void set_radialSoftPixel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_RADIALSOFTPIXEL_OFFSET))(this, value);
		}

		::UnityEngine::UI::SmoothMask_FillType get_fillType()
		{
			return ((::UnityEngine::UI::SmoothMask_FillType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLTYPE_OFFSET))(this);
		}

		::System::Void set_fillType(::UnityEngine::UI::SmoothMask_FillType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_FillType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLTYPE_OFFSET))(this, value);
		}

		::System::Single get_fillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_fillAmount(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLAMOUNT_OFFSET))(this, value);
		}

		::UnityEngine::UI::SmoothMask_FillOriginHorizontal get_fillOriginHorizontal()
		{
			return ((::UnityEngine::UI::SmoothMask_FillOriginHorizontal(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINHORIZONTAL_OFFSET))(this);
		}

		::System::Void set_fillOriginHorizontal(::UnityEngine::UI::SmoothMask_FillOriginHorizontal value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_FillOriginHorizontal))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINHORIZONTAL_OFFSET))(this, value);
		}

		::UnityEngine::UI::SmoothMask_FillOriginVertical get_fillOriginVertical()
		{
			return ((::UnityEngine::UI::SmoothMask_FillOriginVertical(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINVERTICAL_OFFSET))(this);
		}

		::System::Void set_fillOriginVertical(::UnityEngine::UI::SmoothMask_FillOriginVertical value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_FillOriginVertical))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINVERTICAL_OFFSET))(this, value);
		}

		::UnityEngine::UI::SmoothMask_FillOriginRadial get_fillOriginRadial()
		{
			return ((::UnityEngine::UI::SmoothMask_FillOriginRadial(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINRADIAL_OFFSET))(this);
		}

		::System::Void set_fillOriginRadial(::UnityEngine::UI::SmoothMask_FillOriginRadial value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_FillOriginRadial))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINRADIAL_OFFSET))(this, value);
		}

		::UnityEngine::UI::SmoothMask_FillOriginRadial90 get_fillOriginRadial90()
		{
			return ((::UnityEngine::UI::SmoothMask_FillOriginRadial90(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINRADIAL90_OFFSET))(this);
		}

		::System::Void set_fillOriginRadial90(::UnityEngine::UI::SmoothMask_FillOriginRadial90 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_FillOriginRadial90))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINRADIAL90_OFFSET))(this, value);
		}

		::System::Boolean get_fillClockwise()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLCLOCKWISE_OFFSET))(this);
		}

		::System::Void set_fillClockwise(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLCLOCKWISE_OFFSET))(this, value);
		}

		::System::Boolean get_invert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_INVERT_OFFSET))(this);
		}

		::System::Void set_invert(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_INVERT_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Canvas* get_rootCanvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_ROOTCANVAS_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_canvasTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_CANVASTRANSFORM_OFFSET))(this);
		}

		::System::Void CacheRootCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_CACHEROOTCANVAS_OFFSET))(this);
		}

		::System::Boolean MaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_MASKENABLED_OFFSET))(this);
		}

		::System::Void OnSiblingGraphicEnabledDisabled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ONSIBLINGGRAPHICENABLEDDISABLED_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void UpdateRootCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_UPDATEROOTCANVAS_OFFSET))(this);
		}

		::System::Void SetParamsDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SETPARAMSDIRTY_OFFSET))(this);
		}

		static ::System::Void TransformPoints(::Il2CppArray<::UnityEngine::Vector3>* points, ::UnityEngine::Matrix4x4 mat)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_TRANSFORMPOINTS_OFFSET))(points, mat);
		}

		::System::Void RecalculateParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_RECALCULATEPARAMS_OFFSET))(this);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ISRAYCASTLOCATIONVALID_OFFSET))(this, sp, eventCamera);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_REBUILD_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}
	};
}
