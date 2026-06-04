#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B404440)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4043C0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B404890)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B404490)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETTEXTENCODER_OFFSET UNITYSDK_OFFSET(0x1B404510)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETTEXT_OFFSET UNITYSDK_OFFSET(0x1B4044A0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1B404470)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1B404480)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_INTERNALGETBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B4048C0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVECONTENTLENGTHHEADER_OFFSET UNITYSDK_OFFSET(0x1B4048A0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVECONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B4048B0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B4043A0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4043B0)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandler_TypeDefinitionIndex = 5359;

	class DownloadHandler : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RELEASE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_DISPOSE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_data()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GET_DATA_OFFSET))(this);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GET_TEXT_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETDATA_OFFSET))(this);
		}

		::System::String* GetText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETTEXT_OFFSET))(this);
		}

		::System::Text::Encoding* GetTextEncoder()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETTEXTENCODER_OFFSET))(this);
		}

		::System::String* GetContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETCONTENTTYPE_OFFSET))(this);
		}

		::System::Void ReceiveContentLengthHeader(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVECONTENTLENGTHHEADER_OFFSET))(this, a1);
		}

		::System::Void ReceiveContentLength(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVECONTENTLENGTH_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::System::Byte>* InternalGetByteArray(::UnityEngine::Networking::DownloadHandler* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::UnityEngine::Networking::DownloadHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_INTERNALGETBYTEARRAY_OFFSET))(a1);
		}
	};
}
