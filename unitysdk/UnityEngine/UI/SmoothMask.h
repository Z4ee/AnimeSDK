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
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_UI_SMOOTHMASK_CACHEROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x1F584B80)
#define UNITYENGINE_UI_SMOOTHMASK_CACHESCREENTOMASKHOMOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1F5877D0)
#define UNITYENGINE_UI_SMOOTHMASK_COMPUTESCREENTOMASKHOMOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1F5866B0)
#define UNITYENGINE_UI_SMOOTHMASK_GETSCREENTOMASKHOMOGRAPHYTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1F587890)
#define UNITYENGINE_UI_SMOOTHMASK_GETSCREENTOMASKHOMOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1F5865B0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_CANVASTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F584EF0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_DOWNSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1F584100)
#define UNITYENGINE_UI_SMOOTHMASK_GET_DOWNSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1F583DA0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1F5844C0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1F5847F0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1F584570)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINRADIAL90_OFFSET UNITYSDK_OFFSET(0x1F584750)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINRADIAL_OFFSET UNITYSDK_OFFSET(0x1F5846B0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINVERTICAL_OFFSET UNITYSDK_OFFSET(0x1F584610)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLTYPE_OFFSET UNITYSDK_OFFSET(0x1F584420)
#define UNITYENGINE_UI_SMOOTHMASK_GET_INVERT_OFFSET UNITYSDK_OFFSET(0x1F584890)
#define UNITYENGINE_UI_SMOOTHMASK_GET_LEFTSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1F5841A0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_LEFTSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1F583E50)
#define UNITYENGINE_UI_SMOOTHMASK_GET_RADIALSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1F584380)
#define UNITYENGINE_UI_SMOOTHMASK_GET_RADIALSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1F583FB0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F584930)
#define UNITYENGINE_UI_SMOOTHMASK_GET_RIGHTSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1F584240)
#define UNITYENGINE_UI_SMOOTHMASK_GET_RIGHTSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1F583F00)
#define UNITYENGINE_UI_SMOOTHMASK_GET_ROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x1F584A10)
#define UNITYENGINE_UI_SMOOTHMASK_GET_SCREENSPACEMASK_OFFSET UNITYSDK_OFFSET(0x1F583AA0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_SOFTRANGETYPE_OFFSET UNITYSDK_OFFSET(0x1F583C50)
#define UNITYENGINE_UI_SMOOTHMASK_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1F5839B0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_TOPSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1F584060)
#define UNITYENGINE_UI_SMOOTHMASK_GET_TOPSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1F583CF0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F5838C0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_USEACTUALPIXELS_OFFSET UNITYSDK_OFFSET(0x1F5842E0)
#define UNITYENGINE_UI_SMOOTHMASK_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1F588320)
#define UNITYENGINE_UI_SMOOTHMASK_MARKCHILDRENDERERSDIRTY_OFFSET UNITYSDK_OFFSET(0x1F583B20)
#define UNITYENGINE_UI_SMOOTHMASK_MASKENABLED_OFFSET UNITYSDK_OFFSET(0x1F5851C0)
#define UNITYENGINE_UI_SMOOTHMASK_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F5853B0)
#define UNITYENGINE_UI_SMOOTHMASK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F585330)
#define UNITYENGINE_UI_SMOOTHMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F585270)
#define UNITYENGINE_UI_SMOOTHMASK_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1F5884E0)
#define UNITYENGINE_UI_SMOOTHMASK_ONSIBLINGGRAPHICENABLEDDISABLED_OFFSET UNITYSDK_OFFSET(0x1F585230)
#define UNITYENGINE_UI_SMOOTHMASK_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F585530)
#define UNITYENGINE_UI_SMOOTHMASK_REBUILD_OFFSET UNITYSDK_OFFSET(0x1F588540)
#define UNITYENGINE_UI_SMOOTHMASK_RECALCULATEPARAMS_OFFSET UNITYSDK_OFFSET(0x1F5857E0)
#define UNITYENGINE_UI_SMOOTHMASK_SETPARAMSDIRTY_OFFSET UNITYSDK_OFFSET(0x1F583960)
#define UNITYENGINE_UI_SMOOTHMASK_SET_DOWNSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1F584110)
#define UNITYENGINE_UI_SMOOTHMASK_SET_DOWNSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1F583DB0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1F5844D0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1F584800)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1F584580)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINRADIAL90_OFFSET UNITYSDK_OFFSET(0x1F584760)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINRADIAL_OFFSET UNITYSDK_OFFSET(0x1F5846C0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINVERTICAL_OFFSET UNITYSDK_OFFSET(0x1F584620)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLTYPE_OFFSET UNITYSDK_OFFSET(0x1F584430)
#define UNITYENGINE_UI_SMOOTHMASK_SET_INVERT_OFFSET UNITYSDK_OFFSET(0x1F5848A0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_LEFTSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1F5841B0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_LEFTSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1F583E60)
#define UNITYENGINE_UI_SMOOTHMASK_SET_RADIALSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1F584390)
#define UNITYENGINE_UI_SMOOTHMASK_SET_RADIALSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1F583FC0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_RIGHTSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1F584250)
#define UNITYENGINE_UI_SMOOTHMASK_SET_RIGHTSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1F583F10)
#define UNITYENGINE_UI_SMOOTHMASK_SET_SCREENSPACEMASK_OFFSET UNITYSDK_OFFSET(0x1F583AB0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_SOFTRANGETYPE_OFFSET UNITYSDK_OFFSET(0x1F583C60)
#define UNITYENGINE_UI_SMOOTHMASK_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1F5839C0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_TOPSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x1F584070)
#define UNITYENGINE_UI_SMOOTHMASK_SET_TOPSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x1F583D00)
#define UNITYENGINE_UI_SMOOTHMASK_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F5838D0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_USEACTUALPIXELS_OFFSET UNITYSDK_OFFSET(0x1F5842F0)
#define UNITYENGINE_UI_SMOOTHMASK_SOLVELINEAR8_OFFSET UNITYSDK_OFFSET(0x1F587910)
#define UNITYENGINE_UI_SMOOTHMASK_TRANSFORMPOINTS_OFFSET UNITYSDK_OFFSET(0x1F5861F0)
#define UNITYENGINE_UI_SMOOTHMASK_UPDATEMATERIALPARAMSIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1F585580)
#define UNITYENGINE_UI_SMOOTHMASK_UPDATEROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x1F585400)
#define UNITYENGINE_UI_SMOOTHMASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F588930)
#define UNITYENGINE_UI_SMOOTHMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F585060)
#define UNITYENGINE_UI_SMOOTHMASK___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F588A10)
#define UNITYENGINE_UI_SMOOTHMASK___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F588AA0)
#define UNITYENGINE_UI_SMOOTHMASK___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F588B30)
#define UNITYENGINE_UI_SMOOTHMASK___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1F588BC0)
#define UNITYENGINE_UI_SMOOTHMASK___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F588C50)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SmoothMask_TypeDefinitionIndex = 19301;

	class SmoothMask : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_s_MaskUvCorners()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(SmoothMask_TypeDefinitionIndex)->GetStaticField(0x8840);
		}
		::UnityEngine::UI::SmoothMask_Type m_Type; // 0x18
		::System::Boolean m_ForceUpdateChild; // 0x1C
		::UnityEngine::Texture* m_Texture; // 0x20
		::System::Boolean m_ScreenSpaceMask; // 0x28
		::UnityEngine::UI::SmoothMask_SoftRangeType m_SoftRangeType; // 0x2C
		::System::Single m_TopSoftRange; // 0x30
		::System::Single m_DownSoftRange; // 0x34
		::System::Single m_LeftSoftRange; // 0x38
		::System::Single m_RightSoftRange; // 0x3C
		::System::Single m_RadialSoftRange; // 0x40
		::System::Int32 m_TopSoftPixel; // 0x44
		::System::Int32 m_DownSoftPixel; // 0x48
		::System::Int32 m_LeftSoftPixel; // 0x4C
		::System::Int32 m_RightSoftPixel; // 0x50
		::System::Boolean m_UseActualPixels; // 0x54
		::System::Int32 m_RadialSoftPixel; // 0x58
		::UnityEngine::UI::SmoothMask_FillType m_FillType; // 0x5C
		::System::Single m_FillAmount; // 0x60
		::UnityEngine::UI::SmoothMask_FillOriginHorizontal m_FillOriginHorizontal; // 0x64
		::UnityEngine::UI::SmoothMask_FillOriginVertical m_FillOriginVertical; // 0x68
		::UnityEngine::UI::SmoothMask_FillOriginRadial m_FillOriginRadial; // 0x6C
		::UnityEngine::UI::SmoothMask_FillOriginRadial90 m_FillOriginRadial90; // 0x70
		::System::Boolean m_FillClockwise; // 0x74
		::System::Boolean m_Invert; // 0x75
		::UnityEngine::RectTransform* m_RectTransform; // 0x78
		::UnityEngine::UI::SmoothMaskMaterial_Params materialParams; // 0x80
		::System::Boolean m_MaterialParamsDirty; // 0xF8
		::UnityEngine::Canvas* m_RootCanvas; // 0x100
		::UnityEngine::RectTransform* m_CanvasTransform; // 0x108
		::Il2CppArray<::UnityEngine::Vector3>* _Corners; // 0x110
		::Il2CppArray<::UnityEngine::Vector2>* m_HomographySrc; // 0x118
		::Il2CppArray<::System::Double>* m_HomographyA; // 0x120
		::Il2CppArray<::System::Double>* m_HomographyX; // 0x128
		::System::Int32 m_HomographyFrame; // 0x130
		::UnityEngine::Camera* m_HomographyCam; // 0x138
		::System::Boolean m_HomographyOk; // 0x140
		::UnityEngine::Vector4 m_HomographyRow0; // 0x144
		::UnityEngine::Vector4 m_HomographyRow1; // 0x154
		::UnityEngine::Vector4 m_HomographyRow2; // 0x164
		::UnityEngine::Matrix4x4 thisOldMatrix; // 0x174

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK__CCTOR_OFFSET))();
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

		::System::Boolean get_screenSpaceMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_SCREENSPACEMASK_OFFSET))(this);
		}

		::System::Void set_screenSpaceMask(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_SCREENSPACEMASK_OFFSET))(this, value);
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

		::System::Void MarkChildRenderersDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_MARKCHILDRENDERERSDIRTY_OFFSET))(this);
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

		::System::Boolean UpdateMaterialParamsIfNeeded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_UPDATEMATERIALPARAMSIFNEEDED_OFFSET))(this);
		}

		static ::System::Void TransformPoints(::Il2CppArray<::UnityEngine::Vector3>* points, ::UnityEngine::Matrix4x4 mat)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_TRANSFORMPOINTS_OFFSET))(points, mat);
		}

		::System::Boolean GetScreenToMaskHomography(::UnityEngine::Camera* cam, ::UnityEngine::Vector4& row0, ::UnityEngine::Vector4& row1, ::UnityEngine::Vector4& row2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GETSCREENTOMASKHOMOGRAPHY_OFFSET))(this, cam, row0, row1, row2);
		}

		::System::Void CacheScreenToMaskHomography(::UnityEngine::Camera* cam)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_CACHESCREENTOMASKHOMOGRAPHY_OFFSET))(this, cam);
		}

		::System::Boolean GetScreenToMaskHomographyThreadSafe(::UnityEngine::Vector4& row0, ::UnityEngine::Vector4& row1, ::UnityEngine::Vector4& row2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GETSCREENTOMASKHOMOGRAPHYTHREADSAFE_OFFSET))(this, row0, row1, row2);
		}

		::System::Boolean ComputeScreenToMaskHomography(::UnityEngine::Camera* cam, ::UnityEngine::Vector4& row0, ::UnityEngine::Vector4& row1, ::UnityEngine::Vector4& row2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_COMPUTESCREENTOMASKHOMOGRAPHY_OFFSET))(this, cam, row0, row1, row2);
		}

		static ::System::Boolean SolveLinear8(::Il2CppArray<::System::Double>* m, ::Il2CppArray<::System::Double>* x)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Double>*, ::Il2CppArray<::System::Double>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SOLVELINEAR8_OFFSET))(m, x);
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
