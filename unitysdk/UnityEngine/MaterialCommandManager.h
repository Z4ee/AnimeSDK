#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_MATERIALCOMMANDMANAGER_DISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1D6F3530)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1D6F3520)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6F3580)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1D6F3540)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x1D6F3630)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTURESCALEANDOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6F35F0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTURESCALEANDOFFSET_OFFSET UNITYSDK_OFFSET(0x1D6F35B0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1D6F3600)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D6F3590)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_ISKEYWORDENABLED_OFFSET UNITYSDK_OFFSET(0x1D6F35A0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6F34A0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1D6F3490)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1D6F3460)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTUREBYID_OFFSET UNITYSDK_OFFSET(0x1D6F34B0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTUREOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6F34E0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x1D6F34C0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTURESCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6F3510)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1D6F34F0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6F3480)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1D6F3470)

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialCommandManager_TypeDefinitionIndex = 5387;

	class MaterialCommandManager : public ::System::Object
	{
	public:
		static ::System::Void SetFloat(::System::Int32 instanceID, ::System::Int32 propertyID, ::System::Single value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_SETFLOAT_OFFSET))(instanceID, propertyID, value);
		}

		static ::System::Void SetVector(::System::Int32 instanceID, ::System::Int32 propertyID, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_SETVECTOR_OFFSET))(instanceID, propertyID, value);
		}

		static ::System::Void SetColor(::System::Int32 instanceID, ::System::Int32 propertyID, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_SETCOLOR_OFFSET))(instanceID, propertyID, value);
		}

		static ::System::Void SetTextureByID(::System::Int32 instanceID, ::System::Int32 propertyID, ::System::Int32 textureInstanceID)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTUREBYID_OFFSET))(instanceID, propertyID, textureInstanceID);
		}

		static ::System::Void SetTextureOffset(::System::Int32 instanceID, ::System::Int32 propertyID, ::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTUREOFFSET_OFFSET))(instanceID, propertyID, offset);
		}

		static ::System::Void SetTextureScale(::System::Int32 instanceID, ::System::Int32 propertyID, ::UnityEngine::Vector2 scale)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTURESCALE_OFFSET))(instanceID, propertyID, scale);
		}

		static ::System::Void EnableKeyword(::System::Int32 instanceID, ::System::String* keyword)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_ENABLEKEYWORD_OFFSET))(instanceID, keyword);
		}

		static ::System::Void DisableKeyword(::System::Int32 instanceID, ::System::String* keyword)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_DISABLEKEYWORD_OFFSET))(instanceID, keyword);
		}

		static ::UnityEngine::Color GetColor(::System::Int32 instanceID, ::System::Int32 propertyID)
		{
			return ((::UnityEngine::Color(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_GETCOLOR_OFFSET))(instanceID, propertyID);
		}

		static ::UnityEngine::Texture* GetTexture(::System::Int32 instanceID, ::System::Int32 propertyID)
		{
			return ((::UnityEngine::Texture*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTURE_OFFSET))(instanceID, propertyID);
		}

		static ::System::Boolean IsKeywordEnabled(::System::Int32 instanceID, ::System::String* keyword)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_ISKEYWORDENABLED_OFFSET))(instanceID, keyword);
		}

		static ::UnityEngine::Vector4 GetTextureScaleAndOffset(::System::Int32 instanceID, ::System::Int32 propertyID)
		{
			return ((::UnityEngine::Vector4(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTURESCALEANDOFFSET_OFFSET))(instanceID, propertyID);
		}

		static ::UnityEngine::Vector2 GetTextureScale(::System::Int32 instanceID, ::System::Int32 propertyID)
		{
			return ((::UnityEngine::Vector2(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTURESCALE_OFFSET))(instanceID, propertyID);
		}

		static ::UnityEngine::Vector2 GetTextureOffset(::System::Int32 instanceID, ::System::Int32 propertyID)
		{
			return ((::UnityEngine::Vector2(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTUREOFFSET_OFFSET))(instanceID, propertyID);
		}

		static ::System::Void SetVector_Injected(::System::Int32 instanceID, ::System::Int32 propertyID, ::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_SETVECTOR_INJECTED_OFFSET))(instanceID, propertyID, value);
		}

		static ::System::Void SetColor_Injected(::System::Int32 instanceID, ::System::Int32 propertyID, ::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_SETCOLOR_INJECTED_OFFSET))(instanceID, propertyID, value);
		}

		static ::System::Void SetTextureOffset_Injected(::System::Int32 instanceID, ::System::Int32 propertyID, ::UnityEngine::Vector2& offset)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTUREOFFSET_INJECTED_OFFSET))(instanceID, propertyID, offset);
		}

		static ::System::Void SetTextureScale_Injected(::System::Int32 instanceID, ::System::Int32 propertyID, ::UnityEngine::Vector2& scale)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTURESCALE_INJECTED_OFFSET))(instanceID, propertyID, scale);
		}

		static ::System::Void GetColor_Injected(::System::Int32 instanceID, ::System::Int32 propertyID, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_GETCOLOR_INJECTED_OFFSET))(instanceID, propertyID, ret);
		}

		static ::System::Void GetTextureScaleAndOffset_Injected(::System::Int32 instanceID, ::System::Int32 propertyID, ::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTURESCALEANDOFFSET_INJECTED_OFFSET))(instanceID, propertyID, ret);
		}
	};
}
