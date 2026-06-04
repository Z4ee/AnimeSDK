#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_TEXTURECURVE_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1B181660)
#define UNITYENGINE_RENDERING_TEXTURECURVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B181050)
#define UNITYENGINE_RENDERING_TEXTURECURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B1813F0)
#define UNITYENGINE_RENDERING_TEXTURECURVE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B181040)
#define UNITYENGINE_RENDERING_TEXTURECURVE_GETTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1B1810C0)
#define UNITYENGINE_RENDERING_TEXTURECURVE_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B181100)
#define UNITYENGINE_RENDERING_TEXTURECURVE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B180E80)
#define UNITYENGINE_RENDERING_TEXTURECURVE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B180E60)
#define UNITYENGINE_RENDERING_TEXTURECURVE_MOVEKEY_OFFSET UNITYSDK_OFFSET(0x1B181690)
#define UNITYENGINE_RENDERING_TEXTURECURVE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B181060)
#define UNITYENGINE_RENDERING_TEXTURECURVE_REMOVEKEY_OFFSET UNITYSDK_OFFSET(0x1B1816E0)
#define UNITYENGINE_RENDERING_TEXTURECURVE_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1B1810B0)
#define UNITYENGINE_RENDERING_TEXTURECURVE_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B180E70)
#define UNITYENGINE_RENDERING_TEXTURECURVE_SMOOTHTANGENTS_OFFSET UNITYSDK_OFFSET(0x1B181710)
#define UNITYENGINE_RENDERING_TEXTURECURVE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B180F90)
#define UNITYENGINE_RENDERING_TEXTURECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B180ED0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureCurve_TypeDefinitionIndex = 33803;

	class TextureCurve : public ::System::Object
	{
	public:
		// static const ::System::Int32 k_Precision = 0x80; // 0x0
		// static const ::System::Single k_Step; // 0x0
		::System::Int32 _length_k__BackingField; // 0x10
		::System::Boolean m_Loop; // 0x14
		::System::Single m_ZeroValue; // 0x18
		::System::Single m_Range; // 0x1C
		::UnityEngine::AnimationCurve* m_Curve; // 0x20
		::UnityEngine::AnimationCurve* m_LoopingCurve; // 0x28
		::UnityEngine::Texture2D* m_Texture; // 0x30
		::System::Boolean m_IsCurveDirty; // 0x38
		::System::Boolean m_IsTextureDirty; // 0x39

		::System::Void _ctor(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::Vector2& a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Boolean, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::Il2CppArray<::UnityEngine::Keyframe>* a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::Vector2& a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Keyframe>*, ::System::Single, ::System::Boolean, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 get_length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_length(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_SET_LENGTH_OFFSET))(this, a1);
		}

		::UnityEngine::Keyframe get_Item(::System::Int32 a1)
		{
			return ((::UnityEngine::Keyframe(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_DISPOSE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_RELEASE_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_SETDIRTY_OFFSET))(this);
		}

		static ::UnityEngine::TextureFormat GetTextureFormat()
		{
			return ((::UnityEngine::TextureFormat(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_GETTEXTUREFORMAT_OFFSET))();
		}

		::UnityEngine::Texture2D* GetTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_GETTEXTURE_OFFSET))(this);
		}

		::System::Single Evaluate(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_EVALUATE_OFFSET))(this, a1);
		}

		::System::Int32 AddKey(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_ADDKEY_OFFSET))(this, a1, a2);
		}

		::System::Int32 MoveKey(::System::Int32 a1, ::UnityEngine::Keyframe& a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_MOVEKEY_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveKey(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_REMOVEKEY_OFFSET))(this, a1);
		}

		::System::Void SmoothTangents(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_SMOOTHTANGENTS_OFFSET))(this, a1, a2);
		}
	};
}
