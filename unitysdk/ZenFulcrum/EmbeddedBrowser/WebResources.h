#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class FileInfo; }
namespace ZenFulcrum::EmbeddedBrowser { class WebResources_ResponsePreamble; }

#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDDATA_OFFSET UNITYSDK_OFFSET(0x1D7F3EE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDEND_OFFSET UNITYSDK_OFFSET(0x1D7F46B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDERROR_OFFSET UNITYSDK_OFFSET(0x1D7F25E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDFILE_OFFSET UNITYSDK_OFFSET(0x1D7F49B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDPREAMBLE_OFFSET UNITYSDK_OFFSET(0x1D7F38B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDRESPONSE_1_OFFSET UNITYSDK_OFFSET(0x1D7F47D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDRESPONSE_OFFSET UNITYSDK_OFFSET(0x1D7F4570)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7F4AB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F1E20)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int WebResources_TypeDefinitionIndex = 38275;

	class WebResources : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_statusTexts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WebResources_TypeDefinitionIndex)->GetStaticField(0x469C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_extensionMimeTypes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WebResources_TypeDefinitionIndex)->GetStaticField(0x469C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES__CCTOR_OFFSET))();
		}

		::System::Void SendResponse(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDRESPONSE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendResponse_1(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDRESPONSE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendError(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDERROR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendFile(::System::Int32 a1, ::System::IO::FileInfo* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::IO::FileInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDFILE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendPreamble(::System::Int32 a1, ::ZenFulcrum::EmbeddedBrowser::WebResources_ResponsePreamble* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::WebResources_ResponsePreamble*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDPREAMBLE_OFFSET))(this, a1, a2);
		}

		::System::Void SendData(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendEnd(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_SENDEND_OFFSET))(this, a1);
		}
	};
}
