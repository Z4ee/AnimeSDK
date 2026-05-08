#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mime/TransferEncoding.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }
namespace System::Net::Mime { class IEncodableStream; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_MIME_ENCODEDSTREAMFACTORY_CREATEFOOTER_OFFSET UNITYSDK_OFFSET(0x1A10A2D0)
#define SYSTEM_NET_MIME_ENCODEDSTREAMFACTORY_CREATEHEADER_OFFSET UNITYSDK_OFFSET(0x1A10A150)
#define SYSTEM_NET_MIME_ENCODEDSTREAMFACTORY_GETENCODERFORHEADER_OFFSET UNITYSDK_OFFSET(0x1A109DB0)
#define SYSTEM_NET_MIME_ENCODEDSTREAMFACTORY_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1A109C20)
#define SYSTEM_NET_MIME_ENCODEDSTREAMFACTORY_GET_DEFAULTMAXLINELENGTH_OFFSET UNITYSDK_OFFSET(0x1A109C10)
#define SYSTEM_NET_MIME_ENCODEDSTREAMFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A10A350)

namespace System::Net::Mime
{
	inline static constexpr unsigned int EncodedStreamFactory_TypeDefinitionIndex = 3615;

	class EncodedStreamFactory : public ::System::Object
	{
	public:
		// static const ::System::Int32 defaultMaxLineLength = 0x46; // 0x0
		// static const ::System::Int32 initialBufferSize = 0x400; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_ENCODEDSTREAMFACTORY__CTOR_OFFSET))(this);
		}

		static ::System::Int32 get_DefaultMaxLineLength()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_ENCODEDSTREAMFACTORY_GET_DEFAULTMAXLINELENGTH_OFFSET))();
		}

		::System::Net::Mime::IEncodableStream* GetEncoder(::System::Net::Mime::TransferEncoding encoding, ::System::IO::Stream* stream)
		{
			return ((::System::Net::Mime::IEncodableStream*(*)(::PVOID, ::System::Net::Mime::TransferEncoding, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_ENCODEDSTREAMFACTORY_GETENCODER_OFFSET))(this, encoding, stream);
		}

		::System::Net::Mime::IEncodableStream* GetEncoderForHeader(::System::Text::Encoding* encoding, ::System::Boolean useBase64Encoding, ::System::Int32 headerTextLength)
		{
			return ((::System::Net::Mime::IEncodableStream*(*)(::PVOID, ::System::Text::Encoding*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_ENCODEDSTREAMFACTORY_GETENCODERFORHEADER_OFFSET))(this, encoding, useBase64Encoding, headerTextLength);
		}

		::Il2CppArray<::System::Byte>* CreateHeader(::System::Text::Encoding* encoding, ::System::Boolean useBase64Encoding)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Text::Encoding*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_ENCODEDSTREAMFACTORY_CREATEHEADER_OFFSET))(this, encoding, useBase64Encoding);
		}

		::Il2CppArray<::System::Byte>* CreateFooter()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_ENCODEDSTREAMFACTORY_CREATEFOOTER_OFFSET))(this);
		}
	};
}
