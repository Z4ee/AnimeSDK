#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_SOFTSHADOW_COLORADDPARAMSCHANGED_OFFSET UNITYSDK_OFFSET(0x18D64CF0)
#define UNITYENGINE_UI_SOFTSHADOW_DISTORTIONPARAMSCHANGED_OFFSET UNITYSDK_OFFSET(0x18D64AC0)
#define UNITYENGINE_UI_SOFTSHADOW_ENABLECANVASVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x18D64820)
#define UNITYENGINE_UI_SOFTSHADOW_GETCANVASTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x18D63F30)
#define UNITYENGINE_UI_SOFTSHADOW_GETCANVASVARIABLES_OFFSET UNITYSDK_OFFSET(0x18D64120)
#define UNITYENGINE_UI_SOFTSHADOW_GETMAXMINPOSANDUV_OFFSET UNITYSDK_OFFSET(0x18D64240)
#define UNITYENGINE_UI_SOFTSHADOW_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x18D65F10)
#define UNITYENGINE_UI_SOFTSHADOW_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x18D66690)
#define UNITYENGINE_UI_SOFTSHADOW_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x18D65760)
#define UNITYENGINE_UI_SOFTSHADOW_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x18D64750)
#define UNITYENGINE_UI_SOFTSHADOW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18D652A0)
#define UNITYENGINE_UI_SOFTSHADOW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18D65200)
#define UNITYENGINE_UI_SOFTSHADOW_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x18D645A0)
#define UNITYENGINE_UI_SOFTSHADOW_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x18D64680)
#define UNITYENGINE_UI_SOFTSHADOW_PARAMSCHANGED_OFFSET UNITYSDK_OFFSET(0x18D64F00)
#define UNITYENGINE_UI_SOFTSHADOW_SAVELASTPARAMS_OFFSET UNITYSDK_OFFSET(0x18D65050)
#define UNITYENGINE_UI_SOFTSHADOW_START_OFFSET UNITYSDK_OFFSET(0x18D649E0)
#define UNITYENGINE_UI_SOFTSHADOW_UPDATE_OFFSET UNITYSDK_OFFSET(0x18D65140)
#define UNITYENGINE_UI_SOFTSHADOW__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D666D0)
#define UNITYENGINE_UI_SOFTSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D64480)
#define UNITYENGINE_UI_SOFTSHADOW___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x18D667B0)
#define UNITYENGINE_UI_SOFTSHADOW___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18D66840)
#define UNITYENGINE_UI_SOFTSHADOW___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18D668D0)
#define UNITYENGINE_UI_SOFTSHADOW___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x18D668E0)
#define UNITYENGINE_UI_SOFTSHADOW___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x18D66970)
#define UNITYENGINE_UI_SOFTSHADOW___BASE_START_OFFSET UNITYSDK_OFFSET(0x18D66A00)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SoftShadow_TypeDefinitionIndex = 43632;

	class SoftShadow : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Int32* StaticGet_IterationsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftShadow_TypeDefinitionIndex)->GetStaticField(0xD6C0);
		}
		static ::System::Int32* StaticGet_ColorAddTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftShadow_TypeDefinitionIndex)->GetStaticField(0xD6C4);
		}
		static ::System::Int32* StaticGet_Distortion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftShadow_TypeDefinitionIndex)->GetStaticField(0xD6C8);
		}
		static ::System::Int32* StaticGet_ShadowColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftShadow_TypeDefinitionIndex)->GetStaticField(0xD6CC);
		}
		static ::System::Int32* StaticGet_ColorAdd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftShadow_TypeDefinitionIndex)->GetStaticField(0xD6D0);
		}
		static ::System::Int32* StaticGet_DistortionParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftShadow_TypeDefinitionIndex)->GetStaticField(0xD6D4);
		}
		static ::System::Int32* StaticGet_DistortionTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftShadow_TypeDefinitionIndex)->GetStaticField(0xD6D8);
		}
		static ::System::Int32* StaticGet_ColorUVSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftShadow_TypeDefinitionIndex)->GetStaticField(0xD6DC);
		}
		static ::System::Int32* StaticGet_ParamsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftShadow_TypeDefinitionIndex)->GetStaticField(0xD6E0);
		}
		// static const ::System::String* DistortionKeyword; // 0x0
		// static const ::System::String* RGBSeparateKeyword; // 0x0
		// static const ::System::String* ColorAddKeyword; // 0x0
		// static const ::System::String* UISoftShadowPath; // 0x0
		::UnityEngine::Vector2 effectDistance; // 0x20
		::System::Boolean expandPixels; // 0x28
		::System::Int32 iterations; // 0x2C
		::System::Single softRadius; // 0x30
		::UnityEngine::Color color; // 0x34
		::System::Boolean distortion; // 0x44
		::UnityEngine::Texture2D* distortionTex; // 0x48
		::UnityEngine::Texture2D* distortionTex2; // 0x50
		::System::Boolean useDistortionTex2; // 0x58
		::System::Single distortionIntensity; // 0x5C
		::System::Single rgbSeparate; // 0x60
		::UnityEngine::Vector2 distortionTiling; // 0x64
		::UnityEngine::Vector2 distortionOffset; // 0x6C
		::UnityEngine::Vector2 distortionUVSpeed; // 0x74
		::System::Boolean colorAdd; // 0x7C
		::UnityEngine::Texture2D* colorAddTex; // 0x80
		::UnityEngine::Texture2D* colorAddTex2; // 0x88
		::System::Boolean useColorAddTex2; // 0x90
		::UnityEngine::Color colorAddColor; // 0x94
		::UnityEngine::Vector2 colorTiling; // 0xA4
		::UnityEngine::Vector2 colorOffset; // 0xAC
		::UnityEngine::Vector2 colorUVSpeed; // 0xB4
		::UnityEngine::RectTransform* _rectTransform; // 0xC0
		::UnityEngine::Canvas* _canvas; // 0xC8
		::UnityEngine::Canvas* _rootCanvas; // 0xD0
		::UnityEngine::RectTransform* _rootTransform; // 0xD8
		::System::Single _uDelta; // 0xE0
		::System::Single _vDelta; // 0xE4
		::System::Single _radiusU; // 0xE8
		::System::Single _radiusV; // 0xEC
		::UnityEngine::Vector2 _lastEffectDistance; // 0xF0
		::System::Single _lastIterations; // 0xF8
		::System::Single _lastSoftRadius; // 0xFC
		::UnityEngine::Color _lastColor; // 0x100
		::System::Boolean _lastDistortion; // 0x110
		::UnityEngine::Texture2D* _lastDistortionTex; // 0x118
		::UnityEngine::Texture2D* _lastDistortionTex2; // 0x120
		::System::Boolean _lastUseDistortionTex2; // 0x128
		::System::Single _lastDistortionIntensity; // 0x12C
		::System::Single _lastRgbSeparate; // 0x130
		::UnityEngine::Vector2 _lastDistortionTiling; // 0x134
		::UnityEngine::Vector2 _lastDistortionOffset; // 0x13C
		::UnityEngine::Vector2 _lastDistortionUVSpeed; // 0x144
		::System::Boolean _lastColorAdd; // 0x14C
		::UnityEngine::Texture2D* _lastColorAddTex; // 0x150
		::UnityEngine::Texture2D* _lastColorAddTex2; // 0x158
		::System::Boolean _lastUseColorAddTex2; // 0x160
		::UnityEngine::Color _lastColorAddColor; // 0x164
		::UnityEngine::Vector2 _lastColorTiling; // 0x174
		::UnityEngine::Vector2 _lastColorOffset; // 0x17C
		::UnityEngine::Vector2 _lastColorUVSpeed; // 0x184
		::UnityEngine::Material* _modifiedMaterial; // 0x190
		::UnityEngine::Material* _maskedModifiedMaterial; // 0x198
		::System::Boolean _isLoadedMaterial; // 0x1A0
		::Foundation::AssetRequestHandle _uiSoftShadowHandle; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW__CCTOR_OFFSET))();
		}

		::UnityEngine::Matrix4x4 GetCanvasToLocalMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_GETCANVASTOLOCALMATRIX_OFFSET))(this);
		}

		::System::Void GetCanvasVariables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_GETCANVASVARIABLES_OFFSET))(this);
		}

		static ::System::Void GetMaxMinPosAndUV(::UnityEngine::UI::VertexHelper* vh, ::System::Single& xMin, ::System::Single& yMin, ::System::Single& xMax, ::System::Single& yMax, ::System::Single& uMin, ::System::Single& vMin, ::System::Single& uMax, ::System::Single& vMax)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_GETMAXMINPOSANDUV_OFFSET))(vh, xMin, yMin, xMax, yMax, uMin, vMin, uMax, vMax);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void EnableCanvasVertexStream()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_ENABLECANVASVERTEXSTREAM_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_START_OFFSET))(this);
		}

		::System::Boolean DistortionParamsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_DISTORTIONPARAMSCHANGED_OFFSET))(this);
		}

		::System::Boolean ColorAddParamsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_COLORADDPARAMSCHANGED_OFFSET))(this);
		}

		::System::Boolean ParamsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_PARAMSCHANGED_OFFSET))(this);
		}

		::System::Void SaveLastParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_SAVELASTPARAMS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_ONDESTROY_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_MODIFYMESH_OFFSET))(this, vh);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SOFTSHADOW___BASE_START_OFFSET))(this);
		}
	};
}
