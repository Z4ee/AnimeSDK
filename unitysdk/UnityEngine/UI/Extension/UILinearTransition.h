#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UI/Extension/UILinearTransition_BlendMode.h"
#include "unitysdk/UnityEngine/UI/Extension/UILinearTransition_ConnectType.h"
#include "unitysdk/UnityEngine/UI/Extension/UILinearTransition_RampBlendMode.h"
#include "unitysdk/UnityEngine/UI/Extension/UILinearTransition_RampDirection.h"
#include "unitysdk/UnityEngine/UI/Extension/UILinearTransition_TransitionMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_CALCULATEFIXPIXELWIDTH_OFFSET UNITYSDK_OFFSET(0x1B164F20)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_ENABLECANVASSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x1B163E00)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_GETCONNECTEDFAREDGE_OFFSET UNITYSDK_OFFSET(0x1B164410)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B165640)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_GETSTARTANDENDCORNERIDBYANGLE_OFFSET UNITYSDK_OFFSET(0x1B165220)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_ISALLCLIPPED_OFFSET UNITYSDK_OFFSET(0x1B164340)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_LERPANGLE_OFFSET UNITYSDK_OFFSET(0x1B165330)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1B168070)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1B1647D0)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_NORMALIZEANGLE_OFFSET UNITYSDK_OFFSET(0x1B1652C0)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B164060)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B163FD0)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x1B1651A0)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_START_OFFSET UNITYSDK_OFFSET(0x1B163EA0)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B163F10)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1680B0)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B163D00)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B168240)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B1682D0)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION___BASE_START_OFFSET UNITYSDK_OFFSET(0x1B1682E0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILinearTransition_TypeDefinitionIndex = 39922;

	class UILinearTransition : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Int32* StaticGet_LineParameter3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x118F0);
		}
		static ::System::Int32* StaticGet_RampColorA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x118F4);
		}
		static ::System::Int32* StaticGet_RampBlendModeId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x118F8);
		}
		static ::System::Int32* StaticGet_TintColorB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x118FC);
		}
		static ::System::Int32* StaticGet_RampColorB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x11900);
		}
		static ::System::Int32* StaticGet_RampDirectionId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x11904);
		}
		static ::System::Int32* StaticGet_LineParameter2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x11908);
		}
		static ::System::Int32* StaticGet_Ramp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x1190C);
		}
		static ::System::Int32* StaticGet_RampTiling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x11910);
		}
		static ::System::Int32* StaticGet_LineParameter1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x11914);
		}
		static ::System::Int32* StaticGet_RampOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x11918);
		}
		static ::System::Int32* StaticGet_LutTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x1191C);
		}
		static ::System::Int32* StaticGet_DstFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x11920);
		}
		static ::System::Int32* StaticGet_InvertMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x11924);
		}
		static ::System::Int32* StaticGet_LineParameter0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x11928);
		}
		static ::System::Int32* StaticGet_TintColorA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x1192C);
		}
		static ::System::Int32* StaticGet_LineParameter4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x11930);
		}
		static ::System::Int32* StaticGet_Tint()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearTransition_TypeDefinitionIndex)->GetStaticField(0x11934);
		}
		// static const ::System::String* UILinearTransitionPath; // 0x0
		// static const ::System::String* LutKeyword; // 0x0
		// static const ::System::String* ClipAllKeyword; // 0x0
		::UnityEngine::RectTransform* normalizeRectTransform; // 0x20
		::System::Single textSpacing; // 0x28
		::UnityEngine::Texture2D* lutTexture; // 0x30
		::UnityEngine::Color tintColorA; // 0x38
		::UnityEngine::Color tintColorB; // 0x48
		::System::Single tint; // 0x58
		::System::Boolean useRamp; // 0x5C
		::UnityEngine::UI::Extension::UILinearTransition_RampDirection rampDirection; // 0x60
		::UnityEngine::Color rampColorA; // 0x64
		::UnityEngine::Color rampColorB; // 0x74
		::UnityEngine::UI::Extension::UILinearTransition_RampBlendMode rampBlendMode; // 0x84
		::System::Single rampTiling; // 0x88
		::System::Single rampOffset; // 0x8C
		::UnityEngine::UI::Extension::UILinearTransition_BlendMode blendMode; // 0x90
		::System::Single layer; // 0x94
		::UnityEngine::UI::Extension::UILinearTransition_TransitionMode transitionMode; // 0x98
		::UnityEngine::Vector2 transitionPositions1; // 0x9C
		::System::Single transitionAngle1; // 0xA4
		::UnityEngine::Vector2 transitionPositions2; // 0xA8
		::System::Single transitionAngle2; // 0xB0
		::System::Single targetPosition3; // 0xB4
		::System::Single targetAngle3; // 0xB8
		::System::Single lineSoftness3; // 0xBC
		::System::Single targetPosition4; // 0xC0
		::System::Single targetAngle4; // 0xC4
		::System::Single lineSoftness4; // 0xC8
		::System::Single transitionRate3; // 0xCC
		::System::Single transitionRate4; // 0xD0
		::System::Boolean invert2; // 0xD4
		::System::Single targetPosition1; // 0xD8
		::System::Single targetAngle1; // 0xDC
		::System::Single lineSoftness1; // 0xE0
		::System::Single targetPosition2; // 0xE4
		::System::Single targetAngle2; // 0xE8
		::System::Single lineSoftness2; // 0xEC
		::System::Single transitionRate1; // 0xF0
		::System::Single transitionRate2; // 0xF4
		::System::Boolean invert1; // 0xF8
		::System::Boolean invertMask; // 0xF9
		::UnityEngine::UI::Extension::UILinearTransition* connectedBefore; // 0x100
		::UnityEngine::UI::Extension::UILinearTransition_ConnectType connectTypeBefore; // 0x108
		::UnityEngine::UI::Extension::UILinearTransition* connectedAfter; // 0x110
		::UnityEngine::UI::Extension::UILinearTransition_ConnectType connectTypeAfter; // 0x118
		::System::Boolean isMainPart; // 0x11C
		::UnityEngine::Material* _modifiedMaterial; // 0x120
		::System::Boolean _isLoadedMaterial; // 0x128
		::Foundation::AssetRequestHandle _uiLinearTransitionHandle; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION__CCTOR_OFFSET))();
		}

		::System::Void EnableCanvasShaderChannels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_ENABLECANVASSHADERCHANNELS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean IsAllClipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_ISALLCLIPPED_OFFSET))(this);
		}

		::System::Boolean GetConnectedFarEdge(::UnityEngine::UI::Extension::UILinearTransition* connected, ::UnityEngine::UI::Extension::UILinearTransition_ConnectType connectType, ::System::Boolean isBefore, ::System::Single& edge)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UILinearTransition*, ::UnityEngine::UI::Extension::UILinearTransition_ConnectType, ::System::Boolean, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_GETCONNECTEDFAREDGE_OFFSET))(this, connected, connectType, isBefore, edge);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Single CalculateFixPixelWidth(::UnityEngine::RectTransform* refRectTransform, ::System::Single angle)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_CALCULATEFIXPIXELWIDTH_OFFSET))(this, refRectTransform, angle);
		}

		static ::System::Void SetKeyword(::UnityEngine::Material* material, ::System::String* keyword, ::System::Boolean onOff)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_SETKEYWORD_OFFSET))(material, keyword, onOff);
		}

		static ::System::Void GetStartAndEndCornerIdByAngle(::System::Single angle, ::System::Int32& startId, ::System::Int32& endId)
		{
			return ((::System::Void(*)(::System::Single, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_GETSTARTANDENDCORNERIDBYANGLE_OFFSET))(angle, startId, endId);
		}

		static ::System::Single NormalizeAngle(::System::Single angle)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_NORMALIZEANGLE_OFFSET))(angle);
		}

		static ::System::Void LerpAngle(::System::Single angle1, ::System::Single angle2, ::System::Single rate1, ::System::Single rate2, ::System::Single& outAngle1, ::System::Single& outAngle2, ::System::Boolean& clipOrder1, ::System::Boolean& clipOrder2)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_LERPANGLE_OFFSET))(angle1, angle2, rate1, rate2, outAngle1, outAngle2, clipOrder1, clipOrder2);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION___BASE_START_OFFSET))(this);
		}
	};
}
