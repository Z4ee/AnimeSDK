#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Networking/DownloadHandler.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F013A40)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F013AA0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1F013AB0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALCREATETEXTURE_OFFSET UNITYSDK_OFFSET(0x1F013A50)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALGETTEXTURENATIVE_OFFSET UNITYSDK_OFFSET(0x1F013BD0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F013B40)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F013A70)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandlerTexture_TypeDefinitionIndex = 6024;

	class DownloadHandlerTexture : public ::UnityEngine::Networking::DownloadHandler
	{
	public:
		::UnityEngine::Texture2D* mTexture; // 0x18
		::System::Boolean mHasTexture; // 0x20
		::System::Boolean mNonReadable; // 0x21

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE__CTOR_OFFSET))(this, a1);
		}

		static ::System::IntPtr Create(::UnityEngine::Networking::DownloadHandlerTexture* a1, ::System::Boolean a2)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Networking::DownloadHandlerTexture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_CREATE_OFFSET))(a1, a2);
		}

		::System::Void InternalCreateTexture(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALCREATETEXTURE_OFFSET))(this, a1);
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
