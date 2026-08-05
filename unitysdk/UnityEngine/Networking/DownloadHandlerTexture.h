#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Networking/DownloadHandler.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FC6E4B0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1FC6E530)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1FC6E540)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALCREATETEXTURE_OFFSET UNITYSDK_OFFSET(0x1FC6E4C0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALGETTEXTURENATIVE_OFFSET UNITYSDK_OFFSET(0x1FC6E810)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FC6E550)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC6E500)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6E4E0)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandlerTexture_TypeDefinitionIndex = 19417;

	class DownloadHandlerTexture : public ::UnityEngine::Networking::DownloadHandler
	{
	public:
		::UnityEngine::Texture2D* mTexture; // 0x18
		::System::Boolean mHasTexture; // 0x20
		::System::Boolean mNonReadable; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean readable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE__CTOR_1_OFFSET))(this, readable);
		}

		static ::System::IntPtr Create(::UnityEngine::Networking::DownloadHandlerTexture* obj, ::System::Boolean readable)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Networking::DownloadHandlerTexture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_CREATE_OFFSET))(obj, readable);
		}

		::System::Void InternalCreateTexture(::System::Boolean readable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALCREATETEXTURE_OFFSET))(this, readable);
		}

		::Il2CppArray<::System::Byte>* GetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_GET_TEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* InternalGetTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALGETTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* InternalGetTextureNative()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALGETTEXTURENATIVE_OFFSET))(this);
		}
	};
}
