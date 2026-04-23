#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Networking/UnityWebRequest_UnityWebRequestError.h"
#include "unitysdk/UnityEngine/Networking/UnityWebRequest_UnityWebRequestMethod.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class Encoding; }
namespace UnityEngine { class WWWForm; }
namespace UnityEngine::Networking { class CertificateHandler; }
namespace UnityEngine::Networking { class DownloadHandler; }
namespace UnityEngine::Networking { class IMultipartFormSection; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }
namespace UnityEngine::Networking { class UploadHandler; }

#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x1A5B8D60)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_BEGINWEBREQUEST_OFFSET UNITYSDK_OFFSET(0x1A5B9610)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_CREATE_OFFSET UNITYSDK_OFFSET(0x1A5B8D10)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_DISPOSEHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A5B9440)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5B94D0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ESCAPEURL_1_OFFSET UNITYSDK_OFFSET(0x1A5BD010)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ESCAPEURL_OFFSET UNITYSDK_OFFSET(0x1A5BCF90)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5B9340)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GENERATEBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1A5BC680)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETCUSTOMMETHOD_OFFSET UNITYSDK_OFFSET(0x1A5B97D0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETERROR_OFFSET UNITYSDK_OFFSET(0x1A5B9860)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETHTTPSTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x1A5B8CA0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x1A5B97C0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADERKEYS_OFFSET UNITYSDK_OFFSET(0x1A5BA650)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADERS_OFFSET UNITYSDK_OFFSET(0x1A5BA660)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADER_OFFSET UNITYSDK_OFFSET(0x1A5BA640)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETTIMEOUTMSEC_OFFSET UNITYSDK_OFFSET(0x1A5BA810)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETUPLOADPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A5BA3E0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETURL_OFFSET UNITYSDK_OFFSET(0x1A5B99B0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETWEBERRORSTRING_OFFSET UNITYSDK_OFFSET(0x1A5B8C90)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_CERTIFICATEHANDLER_OFFSET UNITYSDK_OFFSET(0x1A5B9600)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSECERTIFICATEHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5B8CB0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSEDOWNLOADHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5B8CD0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSEUPLOADHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5B8CF0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DOWNLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x1A5B95B0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1A5B9870)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1A5BA440)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISHTTPERROR_OFFSET UNITYSDK_OFFSET(0x1A5B9980)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISMODIFIABLE_OFFSET UNITYSDK_OFFSET(0x1A5B96E0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISNETWORKERROR_OFFSET UNITYSDK_OFFSET(0x1A5B9970)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1A5B97E0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_OFFSET UNITYSDK_OFFSET(0x1A5BA900)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_RESPONSECODE_OFFSET UNITYSDK_OFFSET(0x1A5B9990)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A5BA830)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_UPLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x1A5B95C0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_UPLOADPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A5BA400)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_URL_OFFSET UNITYSDK_OFFSET(0x1A5B99A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0x1A5B8D30)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETCUSTOMMETHOD_OFFSET UNITYSDK_OFFSET(0x1A5B9700)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1A5B8D70)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETMETHOD_OFFSET UNITYSDK_OFFSET(0x1A5B9650)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x1A5BA520)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETURL_OFFSET UNITYSDK_OFFSET(0x1A5B9E20)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ISEXECUTING_OFFSET UNITYSDK_OFFSET(0x1A5BA3F0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_1_OFFSET UNITYSDK_OFFSET(0x1A5BC5D0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_2_OFFSET UNITYSDK_OFFSET(0x1A5BC720)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_OFFSET UNITYSDK_OFFSET(0x1A5BA9C0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_RELEASE_OFFSET UNITYSDK_OFFSET(0x1A5B8D20)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SENDWEBREQUEST_OFFSET UNITYSDK_OFFSET(0x1A5B9620)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SERIALIZEFORMSECTIONS_OFFSET UNITYSDK_OFFSET(0x1A5BC990)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETCHUNKED_OFFSET UNITYSDK_OFFSET(0x1A5BA450)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETCUSTOMMETHOD_OFFSET UNITYSDK_OFFSET(0x1A5B96F0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETDOWNLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x1A5BA800)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x1A5B9640)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x1A5BA530)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETTIMEOUTMSEC_OFFSET UNITYSDK_OFFSET(0x1A5BA820)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x1A5BA7F0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPPOST_1_OFFSET UNITYSDK_OFFSET(0x1A5BC7C0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPPOST_OFFSET UNITYSDK_OFFSET(0x1A5BAA60)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETURL_OFFSET UNITYSDK_OFFSET(0x1A5BA3D0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_CHUNKEDTRANSFER_OFFSET UNITYSDK_OFFSET(0x1A5BA460)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSECERTIFICATEHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5B8CC0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSEDOWNLOADHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5B8CE0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSEUPLOADHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5B8D00)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DOWNLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x1A5B9200)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1A5B8E40)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A5BA860)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_UPLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x1A5B92A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_URI_OFFSET UNITYSDK_OFFSET(0x1A5B8FE0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_URL_OFFSET UNITYSDK_OFFSET(0x1A5B8DF0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_UNESCAPEURL_1_OFFSET UNITYSDK_OFFSET(0x1A5BD1C0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_UNESCAPEURL_OFFSET UNITYSDK_OFFSET(0x1A5BD140)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5B8F90)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A5B9160)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B8D80)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UnityWebRequest_TypeDefinitionIndex = 5279;

	class UnityWebRequest : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::UnityEngine::Networking::DownloadHandler* m_DownloadHandler; // 0x18
		::UnityEngine::Networking::UploadHandler* m_UploadHandler; // 0x20
		::UnityEngine::Networking::CertificateHandler* m_CertificateHandler; // 0x28
		::System::Uri* m_Uri; // 0x30
		::System::Boolean _disposeCertificateHandlerOnDispose_k__BackingField; // 0x38
		::System::Boolean _disposeDownloadHandlerOnDispose_k__BackingField; // 0x39
		::System::Boolean _disposeUploadHandlerOnDispose_k__BackingField; // 0x3A

		::System::Void _ctor(::System::String* url, ::System::String* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST__CTOR_OFFSET))(this, url, method);
		}

		::System::Void _ctor_1(::System::Uri* uri, ::System::String* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST__CTOR_1_OFFSET))(this, uri, method);
		}

		::System::Void _ctor_2(::System::String* url, ::System::String* method, ::UnityEngine::Networking::DownloadHandler* downloadHandler, ::UnityEngine::Networking::UploadHandler* uploadHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Networking::DownloadHandler*, ::UnityEngine::Networking::UploadHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST__CTOR_2_OFFSET))(this, url, method, downloadHandler, uploadHandler);
		}

		static ::System::String* GetWebErrorString(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError err)
		{
			return ((::System::String*(*)(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETWEBERRORSTRING_OFFSET))(err);
		}

		static ::System::String* GetHTTPStatusString(::System::Int64 responseCode)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETHTTPSTATUSSTRING_OFFSET))(responseCode);
		}

		::System::Boolean get_disposeCertificateHandlerOnDispose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSECERTIFICATEHANDLERONDISPOSE_OFFSET))(this);
		}

		::System::Void set_disposeCertificateHandlerOnDispose(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSECERTIFICATEHANDLERONDISPOSE_OFFSET))(this, value);
		}

		::System::Boolean get_disposeDownloadHandlerOnDispose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSEDOWNLOADHANDLERONDISPOSE_OFFSET))(this);
		}

		::System::Void set_disposeDownloadHandlerOnDispose(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSEDOWNLOADHANDLERONDISPOSE_OFFSET))(this, value);
		}

		::System::Boolean get_disposeUploadHandlerOnDispose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSEUPLOADHANDLERONDISPOSE_OFFSET))(this);
		}

		::System::Void set_disposeUploadHandlerOnDispose(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSEUPLOADHANDLERONDISPOSE_OFFSET))(this, value);
		}

		static ::System::IntPtr Create()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_CREATE_OFFSET))();
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_RELEASE_OFFSET))(this);
		}

		::System::Void InternalDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALDESTROY_OFFSET))(this);
		}

		::System::Void InternalSetDefaults()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETDEFAULTS_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_DISPOSE_OFFSET))(this);
		}

		::System::Void DisposeHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_DISPOSEHANDLERS_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequestAsyncOperation* BeginWebRequest()
		{
			return ((::UnityEngine::Networking::UnityWebRequestAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_BEGINWEBREQUEST_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequestAsyncOperation* SendWebRequest()
		{
			return ((::UnityEngine::Networking::UnityWebRequestAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SENDWEBREQUEST_OFFSET))(this);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ABORT_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetMethod(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod methodType)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETMETHOD_OFFSET))(this, methodType);
		}

		::System::Void InternalSetMethod(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod methodType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETMETHOD_OFFSET))(this, methodType);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetCustomMethod(::System::String* customMethodName)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETCUSTOMMETHOD_OFFSET))(this, customMethodName);
		}

		::System::Void InternalSetCustomMethod(::System::String* customMethodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETCUSTOMMETHOD_OFFSET))(this, customMethodName);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod GetMethod()
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETMETHOD_OFFSET))(this);
		}

		::System::String* GetCustomMethod()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETCUSTOMMETHOD_OFFSET))(this);
		}

		::System::String* get_method()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_method(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_METHOD_OFFSET))(this, value);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError GetError()
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETERROR_OFFSET))(this);
		}

		::System::String* get_error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ERROR_OFFSET))(this);
		}

		::System::String* get_url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_URL_OFFSET))(this);
		}

		::System::Void set_url(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_URL_OFFSET))(this, value);
		}

		::System::Void set_uri(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_URI_OFFSET))(this, value);
		}

		::System::String* GetUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETURL_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetUrl(::System::String* url)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETURL_OFFSET))(this, url);
		}

		::System::Void InternalSetUrl(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETURL_OFFSET))(this, url);
		}

		::System::Int64 get_responseCode()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_RESPONSECODE_OFFSET))(this);
		}

		::System::Single GetUploadProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETUPLOADPROGRESS_OFFSET))(this);
		}

		::System::Boolean IsExecuting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ISEXECUTING_OFFSET))(this);
		}

		::System::Single get_uploadProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_UPLOADPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_isModifiable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISMODIFIABLE_OFFSET))(this);
		}

		::System::Boolean get_isDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISDONE_OFFSET))(this);
		}

		::System::Boolean get_isNetworkError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISNETWORKERROR_OFFSET))(this);
		}

		::System::Boolean get_isHttpError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISHTTPERROR_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetChunked(::System::Boolean chunked)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETCHUNKED_OFFSET))(this, chunked);
		}

		::System::Void set_chunkedTransfer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_CHUNKEDTRANSFER_OFFSET))(this, value);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError InternalSetRequestHeader(::System::String* name, ::System::String* value)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETREQUESTHEADER_OFFSET))(this, name, value);
		}

		::System::Void SetRequestHeader(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETREQUESTHEADER_OFFSET))(this, name, value);
		}

		::System::String* GetResponseHeader(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADER_OFFSET))(this, name);
		}

		::Il2CppArray<::System::String*>* GetResponseHeaderKeys()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADERKEYS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GetResponseHeaders()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADERS_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetUploadHandler(::UnityEngine::Networking::UploadHandler* uh)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::UnityEngine::Networking::UploadHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPLOADHANDLER_OFFSET))(this, uh);
		}

		::UnityEngine::Networking::UploadHandler* get_uploadHandler()
		{
			return ((::UnityEngine::Networking::UploadHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_UPLOADHANDLER_OFFSET))(this);
		}

		::System::Void set_uploadHandler(::UnityEngine::Networking::UploadHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::UploadHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_UPLOADHANDLER_OFFSET))(this, value);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetDownloadHandler(::UnityEngine::Networking::DownloadHandler* dh)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::UnityEngine::Networking::DownloadHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETDOWNLOADHANDLER_OFFSET))(this, dh);
		}

		::UnityEngine::Networking::DownloadHandler* get_downloadHandler()
		{
			return ((::UnityEngine::Networking::DownloadHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DOWNLOADHANDLER_OFFSET))(this);
		}

		::System::Void set_downloadHandler(::UnityEngine::Networking::DownloadHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::DownloadHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DOWNLOADHANDLER_OFFSET))(this, value);
		}

		::UnityEngine::Networking::CertificateHandler* get_certificateHandler()
		{
			return ((::UnityEngine::Networking::CertificateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_CERTIFICATEHANDLER_OFFSET))(this);
		}

		::System::Int32 GetTimeoutMsec()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETTIMEOUTMSEC_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetTimeoutMsec(::System::Int32 timeout)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETTIMEOUTMSEC_OFFSET))(this, timeout);
		}

		::System::Int32 get_timeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_TIMEOUT_OFFSET))(this);
		}

		::System::Void set_timeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_TIMEOUT_OFFSET))(this, value);
		}

		static ::UnityEngine::Networking::UnityWebRequest* Get(::System::String* uri)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_OFFSET))(uri);
		}

		static ::UnityEngine::Networking::UnityWebRequest* Post(::System::String* uri, ::UnityEngine::WWWForm* formData)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::UnityEngine::WWWForm*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_OFFSET))(uri, formData);
		}

		static ::System::Void SetupPost(::UnityEngine::Networking::UnityWebRequest* request, ::UnityEngine::WWWForm* formData)
		{
			return ((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::UnityEngine::WWWForm*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPPOST_OFFSET))(request, formData);
		}

		static ::UnityEngine::Networking::UnityWebRequest* Post_1(::System::String* uri, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* multipartFormSections)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_1_OFFSET))(uri, multipartFormSections);
		}

		static ::UnityEngine::Networking::UnityWebRequest* Post_2(::System::String* uri, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* multipartFormSections, ::Il2CppArray<::System::Byte>* boundary)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_2_OFFSET))(uri, multipartFormSections, boundary);
		}

		static ::System::Void SetupPost_1(::UnityEngine::Networking::UnityWebRequest* request, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* multipartFormSections, ::Il2CppArray<::System::Byte>* boundary)
		{
			return ((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPPOST_1_OFFSET))(request, multipartFormSections, boundary);
		}

		static ::System::String* EscapeURL(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ESCAPEURL_OFFSET))(s);
		}

		static ::System::String* EscapeURL_1(::System::String* s, ::System::Text::Encoding* e)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ESCAPEURL_1_OFFSET))(s, e);
		}

		static ::System::String* UnEscapeURL(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_UNESCAPEURL_OFFSET))(s);
		}

		static ::System::String* UnEscapeURL_1(::System::String* s, ::System::Text::Encoding* e)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_UNESCAPEURL_1_OFFSET))(s, e);
		}

		static ::Il2CppArray<::System::Byte>* SerializeFormSections(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* multipartFormSections, ::Il2CppArray<::System::Byte>* boundary)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SERIALIZEFORMSECTIONS_OFFSET))(multipartFormSections, boundary);
		}

		static ::Il2CppArray<::System::Byte>* GenerateBoundary()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GENERATEBOUNDARY_OFFSET))();
		}
	};
}
