#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UI/SharedUnityObjectResource_1.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_OUTLINEEX_AWAKE_OFFSET UNITYSDK_OFFSET(0x143C3460)
#define UNITYENGINE_UI_OUTLINEEX_BINDSPLINETEXTURE_OFFSET UNITYSDK_OFFSET(0x143C3DF0)
#define UNITYENGINE_UI_OUTLINEEX_COLORTRANSITIONPART_OFFSET UNITYSDK_OFFSET(0x143C25F0)
#define UNITYENGINE_UI_OUTLINEEX_ENABLEADDITIONALCHANNELS_OFFSET UNITYSDK_OFFSET(0x143C35E0)
#define UNITYENGINE_UI_OUTLINEEX_GETMAX_1_OFFSET UNITYSDK_OFFSET(0x143C9340)
#define UNITYENGINE_UI_OUTLINEEX_GETMAX_OFFSET UNITYSDK_OFFSET(0x143C98B0)
#define UNITYENGINE_UI_OUTLINEEX_GETMIN_1_OFFSET UNITYSDK_OFFSET(0x143C9150)
#define UNITYENGINE_UI_OUTLINEEX_GETMIN_OFFSET UNITYSDK_OFFSET(0x143C9820)
#define UNITYENGINE_UI_OUTLINEEX_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x143CAA00)
#define UNITYENGINE_UI_OUTLINEEX_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x143CA7B0)
#define UNITYENGINE_UI_OUTLINEEX_GET_COLORTRANSITION_OFFSET UNITYSDK_OFFSET(0x143C2D50)
#define UNITYENGINE_UI_OUTLINEEX_GET_DESATURATE_OFFSET UNITYSDK_OFFSET(0x143C2C20)
#define UNITYENGINE_UI_OUTLINEEX_GET_EFFECTCOLOR_OFFSET UNITYSDK_OFFSET(0x143C2710)
#define UNITYENGINE_UI_OUTLINEEX_GET_EFFECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x143C27A0)
#define UNITYENGINE_UI_OUTLINEEX_GET_GRAYBUTTON_OFFSET UNITYSDK_OFFSET(0x143C2B90)
#define UNITYENGINE_UI_OUTLINEEX_GET_ITERATIONS_OFFSET UNITYSDK_OFFSET(0x143C29F0)
#define UNITYENGINE_UI_OUTLINEEX_GET_LOOPTIME_OFFSET UNITYSDK_OFFSET(0x143C2DE0)
#define UNITYENGINE_UI_OUTLINEEX_GET_RADIAN360_OFFSET UNITYSDK_OFFSET(0x143C2A80)
#define UNITYENGINE_UI_OUTLINEEX_GET_SATURATION_OFFSET UNITYSDK_OFFSET(0x143C2CB0)
#define UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORA_OFFSET UNITYSDK_OFFSET(0x143C2F40)
#define UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORB_OFFSET UNITYSDK_OFFSET(0x143C3010)
#define UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORC_OFFSET UNITYSDK_OFFSET(0x143C30F0)
#define UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORD_OFFSET UNITYSDK_OFFSET(0x143C31D0)
#define UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x143C2E90)
#define UNITYENGINE_UI_OUTLINEEX_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x143C32B0)
#define UNITYENGINE_UI_OUTLINEEX_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x143CA9C0)
#define UNITYENGINE_UI_OUTLINEEX_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x143C4740)
#define UNITYENGINE_UI_OUTLINEEX_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x143C40C0)
#define UNITYENGINE_UI_OUTLINEEX_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x143C4160)
#define UNITYENGINE_UI_OUTLINEEX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x143C3B90)
#define UNITYENGINE_UI_OUTLINEEX_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x143C4070)
#define UNITYENGINE_UI_OUTLINEEX_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x143C3A10)
#define UNITYENGINE_UI_OUTLINEEX_ONENABLE_OFFSET UNITYSDK_OFFSET(0x143C3880)
#define UNITYENGINE_UI_OUTLINEEX_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x143C4000)
#define UNITYENGINE_UI_OUTLINEEX_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x143C41E0)
#define UNITYENGINE_UI_OUTLINEEX_PROCESSQUADSLICEDIMAGEVERTICES_OFFSET UNITYSDK_OFFSET(0x143C4E00)
#define UNITYENGINE_UI_OUTLINEEX_PROCESSREGULARVERTICES_OFFSET UNITYSDK_OFFSET(0x143C7260)
#define UNITYENGINE_UI_OUTLINEEX_PROCESSTRISLICEDIMAGEVERTICES_OFFSET UNITYSDK_OFFSET(0x143C5C70)
#define UNITYENGINE_UI_OUTLINEEX_PROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x143C8100)
#define UNITYENGINE_UI_OUTLINEEX_REFRESHOUTLINEALPHAMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x143C4530)
#define UNITYENGINE_UI_OUTLINEEX_REFRESHOUTLINEPOSARRAY_OFFSET UNITYSDK_OFFSET(0x143C42F0)
#define UNITYENGINE_UI_OUTLINEEX_REFRESH_OFFSET UNITYSDK_OFFSET(0x143C2950)
#define UNITYENGINE_UI_OUTLINEEX_SETMATERIALPROPSUNMASK_OFFSET UNITYSDK_OFFSET(0x143CA1E0)
#define UNITYENGINE_UI_OUTLINEEX_SETMATERIALPROPS_OFFSET UNITYSDK_OFFSET(0x143C9940)
#define UNITYENGINE_UI_OUTLINEEX_SETNEWPOSANDUV_OFFSET UNITYSDK_OFFSET(0x143C9530)
#define UNITYENGINE_UI_OUTLINEEX_SETSPINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x143C3E60)
#define UNITYENGINE_UI_OUTLINEEX_SET_COLORTRANSITION_OFFSET UNITYSDK_OFFSET(0x143C2D60)
#define UNITYENGINE_UI_OUTLINEEX_SET_DESATURATE_OFFSET UNITYSDK_OFFSET(0x143C2C30)
#define UNITYENGINE_UI_OUTLINEEX_SET_EFFECTCOLOR_OFFSET UNITYSDK_OFFSET(0x143C2720)
#define UNITYENGINE_UI_OUTLINEEX_SET_EFFECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x143C27B0)
#define UNITYENGINE_UI_OUTLINEEX_SET_GRAYBUTTON_OFFSET UNITYSDK_OFFSET(0x143C2BA0)
#define UNITYENGINE_UI_OUTLINEEX_SET_ITERATIONS_OFFSET UNITYSDK_OFFSET(0x143C2A00)
#define UNITYENGINE_UI_OUTLINEEX_SET_LOOPTIME_OFFSET UNITYSDK_OFFSET(0x143C2DF0)
#define UNITYENGINE_UI_OUTLINEEX_SET_RADIAN360_OFFSET UNITYSDK_OFFSET(0x143C2A90)
#define UNITYENGINE_UI_OUTLINEEX_SET_SATURATION_OFFSET UNITYSDK_OFFSET(0x143C2CC0)
#define UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORA_OFFSET UNITYSDK_OFFSET(0x143C2F50)
#define UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORB_OFFSET UNITYSDK_OFFSET(0x143C3020)
#define UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORC_OFFSET UNITYSDK_OFFSET(0x143C3100)
#define UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORD_OFFSET UNITYSDK_OFFSET(0x143C31E0)
#define UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x143C2EA0)
#define UNITYENGINE_UI_OUTLINEEX_START_OFFSET UNITYSDK_OFFSET(0x143C3530)
#define UNITYENGINE_UI_OUTLINEEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x143CADB0)
#define UNITYENGINE_UI_OUTLINEEX__CTOR_OFFSET UNITYSDK_OFFSET(0x143CAC60)
#define UNITYENGINE_UI_OUTLINEEX___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x143CAF80)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x143CB010)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x143CB0A0)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x143CB130)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x143CB1C0)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x143CB250)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x143CB260)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x143CB270)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x143CB280)
#define UNITYENGINE_UI_OUTLINEEX___BASE_START_OFFSET UNITYSDK_OFFSET(0x143CB310)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int OutlineEx_TypeDefinitionIndex = 44568;

	class OutlineEx : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::UnityEngine::UI::SharedUnityObjectResource_1<::UnityEngine::Material*>* StaticGet_sharedUnityObjectResource()
		{
			return (::UnityEngine::UI::SharedUnityObjectResource_1<::UnityEngine::Material*>*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0x353C0);
		}
		static ::System::Int32* StaticGet_SampleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD2D0);
		}
		static ::System::Int32* StaticGet_SaturateId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD2D4);
		}
		static ::System::Int32* StaticGet_OutlinePosArray()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD2D8);
		}
		static ::System::Int32* StaticGet_ColorD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD2DC);
		}
		static ::System::Int32* StaticGet_OutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD2E0);
		}
		static ::System::Int32* StaticGet_OutlineAlphaMultiplier()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD2E4);
		}
		static ::System::Int32* StaticGet_ColorA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD2E8);
		}
		static ::System::Int32* StaticGet_LoopTime1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD2EC);
		}
		static ::System::Int32* StaticGet_ColorId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD2F0);
		}
		static ::System::Int32* StaticGet_Percentage()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD2F4);
		}
		static ::System::Int32* StaticGet_CullBodyAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD2F8);
		}
		static ::System::Int32* StaticGet_OutlineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD2FC);
		}
		static ::System::Int32* StaticGet_ColorB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD300);
		}
		static ::System::Int32* StaticGet_BodyAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD304);
		}
		static ::System::Int32* StaticGet_ColorC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD308);
		}
		static ::System::Int32* StaticGet_Radian360PropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD30C);
		}
		// static const ::System::String* TextBoldnessAndSharpnessKeyword; // 0x0
		// static const ::System::String* ColorTransitionKeyword; // 0x0
		// static const ::System::String* ColorTransitionBodyKeyword; // 0x0
		// static const ::System::String* UseForSpineKeyword; // 0x0
		// static const ::System::String* UseForOfflineSpineKeyword; // 0x0
		// static const ::System::String* IsTextComponentKeyword; // 0x0
		// static const ::System::String* KeepWidthKeyword; // 0x0
		::UnityEngine::Color m_EffectColor; // 0x20
		::System::Single m_EffectDistance; // 0x30
		::System::Int32 m_Iterations; // 0x34
		::System::Single m_AngleRange; // 0x38
		::System::Single m_AngleOffset; // 0x3C
		::System::Single m_BodyAlpha; // 0x40
		::System::Single m_Radian360; // 0x44
		::System::Boolean m_KeepWidth; // 0x48
		::System::Boolean m_CullBodyAlpha; // 0x49
		::UnityEngine::RenderTexture* spineTextureHolder; // 0x50
		::System::Boolean m_UseForSpine; // 0x58
		::System::Boolean m_GrayButton; // 0x59
		::System::Boolean m_Desaturate; // 0x5A
		::System::Single m_Saturation; // 0x5C
		::System::Boolean m_ColorTransition; // 0x60
		::System::Int32 m_ColorTransitionPart; // 0x64
		::System::Single m_LoopTime; // 0x68
		::System::Single m_TransitionPercentage; // 0x6C
		::UnityEngine::Color m_TransitionColorA; // 0x70
		::UnityEngine::Color m_TransitionColorB; // 0x80
		::UnityEngine::Color m_TransitionColorC; // 0x90
		::UnityEngine::Color m_TransitionColorD; // 0xA0
		::Il2CppArray<::UnityEngine::Vector4>* m_OutlinePosArray; // 0xB0
		::System::Single m_OutlineAlphaMultiplier; // 0xB8
		::System::Boolean m_UseForOfflineSpine; // 0xBC
		::System::Int32 _lastIterations; // 0xC0
		::System::Single _lastAngleRange; // 0xC4
		::System::Single _lastAngleOffset; // 0xC8
		::UnityEngine::Material* thisClonedMaterial; // 0xD0
		::UnityEngine::Quaternion _lastRotation; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>* ColorTransitionPart()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_COLORTRANSITIONPART_OFFSET))(this);
		}

		::UnityEngine::Color get_effectColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_EFFECTCOLOR_OFFSET))(this);
		}

		::System::Void set_effectColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_EFFECTCOLOR_OFFSET))(this, value);
		}

		::System::Single get_effectDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_EFFECTDISTANCE_OFFSET))(this);
		}

		::System::Void set_effectDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_EFFECTDISTANCE_OFFSET))(this, value);
		}

		::System::Int32 get_iterations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_ITERATIONS_OFFSET))(this);
		}

		::System::Void set_iterations(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_ITERATIONS_OFFSET))(this, value);
		}

		::System::Single get_Radian360()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_RADIAN360_OFFSET))(this);
		}

		::System::Void set_Radian360(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_RADIAN360_OFFSET))(this, value);
		}

		::System::Boolean get_GrayButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_GRAYBUTTON_OFFSET))(this);
		}

		::System::Void set_GrayButton(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_GRAYBUTTON_OFFSET))(this, value);
		}

		::System::Boolean get_Desaturate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_DESATURATE_OFFSET))(this);
		}

		::System::Void set_Desaturate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_DESATURATE_OFFSET))(this, value);
		}

		::System::Single get_Saturation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_SATURATION_OFFSET))(this);
		}

		::System::Void set_Saturation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_SATURATION_OFFSET))(this, value);
		}

		::System::Boolean get_ColorTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_COLORTRANSITION_OFFSET))(this);
		}

		::System::Void set_ColorTransition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_COLORTRANSITION_OFFSET))(this, value);
		}

		::System::Single get_LoopTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_LOOPTIME_OFFSET))(this);
		}

		::System::Void set_LoopTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_LOOPTIME_OFFSET))(this, value);
		}

		::System::Single get_TransitionPercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONPERCENTAGE_OFFSET))(this);
		}

		::System::Void set_TransitionPercentage(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONPERCENTAGE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_TransitionColorA()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORA_OFFSET))(this);
		}

		::System::Void set_TransitionColorA(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORA_OFFSET))(this, value);
		}

		::UnityEngine::Color get_TransitionColorB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORB_OFFSET))(this);
		}

		::System::Void set_TransitionColorB(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORB_OFFSET))(this, value);
		}

		::UnityEngine::Color get_TransitionColorC()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORC_OFFSET))(this);
		}

		::System::Void set_TransitionColorC(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORC_OFFSET))(this, value);
		}

		::UnityEngine::Color get_TransitionColorD()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORD_OFFSET))(this);
		}

		::System::Void set_TransitionColorD(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORD_OFFSET))(this, value);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ISACTIVE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONDESTROY_OFFSET))(this);
		}

		::System::Void BindSplineTexture(::UnityEngine::RenderTexture* spineRT)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_BINDSPLINETEXTURE_OFFSET))(this, spineRT);
		}

		::System::Void SetSpineMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SETSPINEMATERIAL_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONUPDATE_OFFSET))(this);
		}

		::System::Void EnableAdditionalChannels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ENABLEADDITIONALCHANNELS_OFFSET))(this);
		}

		::System::Void RefreshOutlinePosArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_REFRESHOUTLINEPOSARRAY_OFFSET))(this);
		}

		::System::Void RefreshOutlineAlphaMultiplier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_REFRESHOUTLINEALPHAMULTIPLIER_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_REFRESH_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void ProcessRegularVertices(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_PROCESSREGULARVERTICES_OFFSET))(this, vh);
		}

		::System::Void ProcessVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*& vertexList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_PROCESSVERTICES_OFFSET))(this, vertexList);
		}

		static ::UnityEngine::UIVertex SetNewPosAndUV(::UnityEngine::UIVertex pVertex, ::System::Single pOutLineWidth, ::UnityEngine::Vector2 pPosCenter, ::UnityEngine::Vector2 pTriangleX, ::UnityEngine::Vector2 pTriangleY, ::UnityEngine::Vector2 pUVX, ::UnityEngine::Vector2 pUVY, ::UnityEngine::Vector2 pUVMin, ::UnityEngine::Vector2 pUVMax)
		{
			return ((::UnityEngine::UIVertex(*)(::UnityEngine::UIVertex, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SETNEWPOSANDUV_OFFSET))(pVertex, pOutLineWidth, pPosCenter, pTriangleX, pTriangleY, pUVX, pUVY, pUVMin, pUVMax);
		}

		::System::Void ProcessQuadSlicedImageVertices(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_PROCESSQUADSLICEDIMAGEVERTICES_OFFSET))(this, vh);
		}

		::System::Void ProcessTriSlicedImageVertices(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_PROCESSTRISLICEDIMAGEVERTICES_OFFSET))(this, vh);
		}

		static ::System::Single GetMin(::System::Single pA, ::System::Single pB, ::System::Single pC)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GETMIN_OFFSET))(pA, pB, pC);
		}

		static ::System::Single GetMax(::System::Single pA, ::System::Single pB, ::System::Single pC)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GETMAX_OFFSET))(pA, pB, pC);
		}

		static ::UnityEngine::Vector2 GetMin_1(::UnityEngine::Vector2 pA, ::UnityEngine::Vector2 pB, ::UnityEngine::Vector2 pC)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GETMIN_1_OFFSET))(pA, pB, pC);
		}

		static ::UnityEngine::Vector2 GetMax_1(::UnityEngine::Vector2 pA, ::UnityEngine::Vector2 pB, ::UnityEngine::Vector2 pC)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GETMAX_1_OFFSET))(pA, pB, pC);
		}

		::System::Void SetMaterialProps(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SETMATERIALPROPS_OFFSET))(this, material);
		}

		::System::Void SetMaterialPropsUnmask(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SETMATERIALPROPSUNMASK_OFFSET))(this, material);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_MODIFIERSORTORDER_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterialPost(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GETMODIFIEDMATERIALPOST_OFFSET))(this, baseMaterial);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_AWAKE_OFFSET))(this);
		}

		::System::Boolean __base_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ISACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_START_OFFSET))(this);
		}
	};
}
