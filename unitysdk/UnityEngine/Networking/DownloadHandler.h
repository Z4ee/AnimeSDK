#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_COMPLETECONTENT_OFFSET UNITYSDK_OFFSET(0x1C0E9700)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C0E91B0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C0E9130)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C0E96C0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C0E9200)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETTEXTENCODER_OFFSET UNITYSDK_OFFSET(0x1C0E92A0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETTEXT_OFFSET UNITYSDK_OFFSET(0x1C0E9210)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1C0E91E0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1C0E91F0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_INTERNALGETBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1C0E9710)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVECONTENTLENGTHHEADER_OFFSET UNITYSDK_OFFSET(0x1C0E96E0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVECONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C0E96F0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVEDATA_OFFSET UNITYSDK_OFFSET(0x1C0E96D0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C0E9110)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E9120)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandler_TypeDefinitionIndex = 6627;

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

		::System::Boolean ReceiveData(::Il2CppArray<::System::Byte>* data, ::System::Int32 dataLength)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVEDATA_OFFSET))(this, data, dataLength);
		}

		::System::Void ReceiveContentLengthHeader(::System::UInt64 contentLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVECONTENTLENGTHHEADER_OFFSET))(this, contentLength);
		}

		::System::Void ReceiveContentLength(::System::Int32 contentLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVECONTENTLENGTH_OFFSET))(this, contentLength);
		}

		::System::Void CompleteContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_COMPLETECONTENT_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* InternalGetByteArray(::UnityEngine::Networking::DownloadHandler* dh)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::UnityEngine::Networking::DownloadHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_INTERNALGETBYTEARRAY_OFFSET))(dh);
		}
	};
}
