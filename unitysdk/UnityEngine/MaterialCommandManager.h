#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class BeforeMaterialCommandUpdate; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_MATERIALCOMMANDMANAGER_ADDMANAGEDDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x1EA87470)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_DISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1EA873E0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1EA873D0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA87440)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1EA87400)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1EA873F0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x1EA87570)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTURESCALEANDOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA87530)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTURESCALEANDOFFSET_OFFSET UNITYSDK_OFFSET(0x1EA874F0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1EA87540)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EA87450)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_ISKEYWORDENABLED_OFFSET UNITYSDK_OFFSET(0x1EA87460)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_REGISTERBEFOREMATERIALCOMMANDUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA87490)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETBEFOREMATERIALCOMMANDUPDATEPROCESS_OFFSET UNITYSDK_OFFSET(0x1EA87480)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA87330)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1EA87320)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1EA872F0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA87350)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x1EA87340)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTUREBYID_OFFSET UNITYSDK_OFFSET(0x1EA87360)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTUREOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA87390)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x1EA87370)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTURESCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA873C0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1EA873A0)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA87310)
#define UNITYENGINE_MATERIALCOMMANDMANAGER_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1EA87300)

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialCommandManager_TypeDefinitionIndex = 5390;

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

		static ::System::Void SetMatrix(::System::Int32 instanceID, ::System::Int32 propertyID, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_SETMATRIX_OFFSET))(instanceID, propertyID, value);
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

		static ::System::Single GetFloat(::System::Int32 instanceID, ::System::Int32 propertyID)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_GETFLOAT_OFFSET))(instanceID, propertyID);
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

		static ::System::Void AddManagedDependency(::Unity::Jobs::JobHandle& fence)
		{
			return ((::System::Void(*)(::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_ADDMANAGEDDEPENDENCY_OFFSET))(fence);
		}

		static ::System::Void SetBeforeMaterialCommandUpdateProcess(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_SETBEFOREMATERIALCOMMANDUPDATEPROCESS_OFFSET))(ptr);
		}

		static ::System::Void RegisterBeforeMaterialCommandUpdate(::UnityEngine::BeforeMaterialCommandUpdate* callback)
		{
			return ((::System::Void(*)(::UnityEngine::BeforeMaterialCommandUpdate*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_REGISTERBEFOREMATERIALCOMMANDUPDATE_OFFSET))(callback);
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

		static ::System::Void SetMatrix_Injected(::System::Int32 instanceID, ::System::Int32 propertyID, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALCOMMANDMANAGER_SETMATRIX_INJECTED_OFFSET))(instanceID, propertyID, value);
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
