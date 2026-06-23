#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class FileInfo; }
namespace ZenFulcrum::EmbeddedBrowser { class WebResources_ResponsePreamble; }

#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDDATA_OFFSET UNITYSDK_OFFSET(0x1E763650)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDEND_OFFSET UNITYSDK_OFFSET(0x1E763870)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDERROR_OFFSET UNITYSDK_OFFSET(0x1E763B30)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDFILE_OFFSET UNITYSDK_OFFSET(0x1E763CB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDPREAMBLE_OFFSET UNITYSDK_OFFSET(0x1E763010)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDRESPONSE_1_OFFSET UNITYSDK_OFFSET(0x1E7639B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDRESPONSE_OFFSET UNITYSDK_OFFSET(0x1E762F70)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E763DB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E763DA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int WebResources_TypeDefinitionIndex = 32752;

	class WebResources : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_statusTexts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WebResources_TypeDefinitionIndex)->GetStaticField(0x27070);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_extensionMimeTypes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WebResources_TypeDefinitionIndex)->GetStaticField(0x27078);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES__CCTOR_OFFSET))();
		}

		::System::Void SendResponse(::System::Int32 id, ::Il2CppArray<::System::Byte>* data, ::System::String* mimeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDRESPONSE_OFFSET))(this, id, data, mimeType);
		}

		::System::Void SendResponse_1(::System::Int32 id, ::System::String* text, ::System::String* mimeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDRESPONSE_1_OFFSET))(this, id, text, mimeType);
		}

		::System::Void SendError(::System::Int32 id, ::System::String* html, ::System::Int32 errorCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDERROR_OFFSET))(this, id, html, errorCode);
		}

		::System::Void SendFile(::System::Int32 id, ::System::IO::FileInfo* file, ::System::Boolean forceDownload)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::IO::FileInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDFILE_OFFSET))(this, id, file, forceDownload);
		}

		::System::Void SendPreamble(::System::Int32 id, ::ZenFulcrum::EmbeddedBrowser::WebResources_ResponsePreamble* pre)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::WebResources_ResponsePreamble*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDPREAMBLE_OFFSET))(this, id, pre);
		}

		::System::Void SendData(::System::Int32 id, ::Il2CppArray<::System::Byte>* data, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDDATA_OFFSET))(this, id, data, length);
		}

		::System::Void SendEnd(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDEND_OFFSET))(this, id);
		}
	};
}
