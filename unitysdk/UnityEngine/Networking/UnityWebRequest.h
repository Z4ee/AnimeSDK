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

#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x1D275EC0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_BEGINWEBREQUEST_OFFSET UNITYSDK_OFFSET(0x1D2767A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_CREATE_OFFSET UNITYSDK_OFFSET(0x1D275E70)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_DISPOSEHANDLERS_OFFSET UNITYSDK_OFFSET(0x1D2765A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D276630)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ESCAPEURL_1_OFFSET UNITYSDK_OFFSET(0x1D27AFA0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ESCAPEURL_OFFSET UNITYSDK_OFFSET(0x1D27AF80)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D2764A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GENERATEBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1D27A500)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETCUSTOMMETHOD_OFFSET UNITYSDK_OFFSET(0x1D276960)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETERROR_OFFSET UNITYSDK_OFFSET(0x1D2769F0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETHTTPSTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x1D275E00)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x1D276950)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADERKEYS_OFFSET UNITYSDK_OFFSET(0x1D2778A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADERS_OFFSET UNITYSDK_OFFSET(0x1D2778B0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADER_OFFSET UNITYSDK_OFFSET(0x1D277890)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETTIMEOUTMSEC_OFFSET UNITYSDK_OFFSET(0x1D277A40)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETUPLOADPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D277630)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETURL_OFFSET UNITYSDK_OFFSET(0x1D276B40)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETWEBERRORSTRING_OFFSET UNITYSDK_OFFSET(0x1D275DF0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_CERTIFICATEHANDLER_OFFSET UNITYSDK_OFFSET(0x1D276790)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSECERTIFICATEHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1D275E10)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSEDOWNLOADHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1D275E30)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSEUPLOADHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1D275E50)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DOWNLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x1D276740)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1D276A00)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1D277690)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISHTTPERROR_OFFSET UNITYSDK_OFFSET(0x1D276B10)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISMODIFIABLE_OFFSET UNITYSDK_OFFSET(0x1D276870)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISNETWORKERROR_OFFSET UNITYSDK_OFFSET(0x1D276B00)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1D276970)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_OFFSET UNITYSDK_OFFSET(0x1D277B30)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_RESPONSECODE_OFFSET UNITYSDK_OFFSET(0x1D276B20)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D277A60)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_UPLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x1D276750)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_UPLOADPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D277650)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_URL_OFFSET UNITYSDK_OFFSET(0x1D276B30)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0x1D275E90)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETCUSTOMMETHOD_OFFSET UNITYSDK_OFFSET(0x1D276890)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1D275ED0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETMETHOD_OFFSET UNITYSDK_OFFSET(0x1D2767E0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x1D277770)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETURL_OFFSET UNITYSDK_OFFSET(0x1D276FC0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ISEXECUTING_OFFSET UNITYSDK_OFFSET(0x1D277640)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_1_OFFSET UNITYSDK_OFFSET(0x1D27A450)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_2_OFFSET UNITYSDK_OFFSET(0x1D27A5A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_OFFSET UNITYSDK_OFFSET(0x1D277BF0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D275E80)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SENDWEBREQUEST_OFFSET UNITYSDK_OFFSET(0x1D2767B0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SERIALIZEFORMSECTIONS_OFFSET UNITYSDK_OFFSET(0x1D27A870)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETCHUNKED_OFFSET UNITYSDK_OFFSET(0x1D2776A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETCUSTOMMETHOD_OFFSET UNITYSDK_OFFSET(0x1D276880)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETDOWNLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x1D277A30)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x1D2767D0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x1D277780)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETTIMEOUTMSEC_OFFSET UNITYSDK_OFFSET(0x1D277A50)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x1D277A20)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPPOST_1_OFFSET UNITYSDK_OFFSET(0x1D27A640)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPPOST_OFFSET UNITYSDK_OFFSET(0x1D277C90)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETURL_OFFSET UNITYSDK_OFFSET(0x1D277620)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_CHUNKEDTRANSFER_OFFSET UNITYSDK_OFFSET(0x1D2776B0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSECERTIFICATEHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1D275E20)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSEDOWNLOADHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1D275E40)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSEUPLOADHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1D275E60)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DOWNLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x1D276360)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1D275FA0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D277A90)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_UPLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x1D276400)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_URI_OFFSET UNITYSDK_OFFSET(0x1D276140)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_URL_OFFSET UNITYSDK_OFFSET(0x1D275F50)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_UNESCAPEURL_1_OFFSET UNITYSDK_OFFSET(0x1D27B1C0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_UNESCAPEURL_OFFSET UNITYSDK_OFFSET(0x1D27B1A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D2760F0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D2762C0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D275EE0)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UnityWebRequest_TypeDefinitionIndex = 5360;

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

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Uri* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::String* a2, ::UnityEngine::Networking::DownloadHandler* a3, ::UnityEngine::Networking::UploadHandler* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Networking::DownloadHandler*, ::UnityEngine::Networking::UploadHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::String* GetWebErrorString(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError a1)
		{
			return ((::System::String*(*)(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETWEBERRORSTRING_OFFSET))(a1);
		}

		static ::System::String* GetHTTPStatusString(::System::Int64 a1)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETHTTPSTATUSSTRING_OFFSET))(a1);
		}

		::System::Boolean get_disposeCertificateHandlerOnDispose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSECERTIFICATEHANDLERONDISPOSE_OFFSET))(this);
		}

		::System::Void set_disposeCertificateHandlerOnDispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSECERTIFICATEHANDLERONDISPOSE_OFFSET))(this, a1);
		}

		::System::Boolean get_disposeDownloadHandlerOnDispose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSEDOWNLOADHANDLERONDISPOSE_OFFSET))(this);
		}

		::System::Void set_disposeDownloadHandlerOnDispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSEDOWNLOADHANDLERONDISPOSE_OFFSET))(this, a1);
		}

		::System::Boolean get_disposeUploadHandlerOnDispose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSEUPLOADHANDLERONDISPOSE_OFFSET))(this);
		}

		::System::Void set_disposeUploadHandlerOnDispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSEUPLOADHANDLERONDISPOSE_OFFSET))(this, a1);
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

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetMethod(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETMETHOD_OFFSET))(this, a1);
		}

		::System::Void InternalSetMethod(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETMETHOD_OFFSET))(this, a1);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetCustomMethod(::System::String* a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETCUSTOMMETHOD_OFFSET))(this, a1);
		}

		::System::Void InternalSetCustomMethod(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETCUSTOMMETHOD_OFFSET))(this, a1);
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

		::System::Void set_method(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_METHOD_OFFSET))(this, a1);
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

		::System::Void set_url(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_URL_OFFSET))(this, a1);
		}

		::System::Void set_uri(::System::Uri* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_URI_OFFSET))(this, a1);
		}

		::System::String* GetUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETURL_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetUrl(::System::String* a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETURL_OFFSET))(this, a1);
		}

		::System::Void InternalSetUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETURL_OFFSET))(this, a1);
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

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetChunked(::System::Boolean a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETCHUNKED_OFFSET))(this, a1);
		}

		::System::Void set_chunkedTransfer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_CHUNKEDTRANSFER_OFFSET))(this, a1);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError InternalSetRequestHeader(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETREQUESTHEADER_OFFSET))(this, a1, a2);
		}

		::System::Void SetRequestHeader(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETREQUESTHEADER_OFFSET))(this, a1, a2);
		}

		::System::String* GetResponseHeader(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADER_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GetResponseHeaderKeys()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADERKEYS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GetResponseHeaders()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADERS_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetUploadHandler(::UnityEngine::Networking::UploadHandler* a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::UnityEngine::Networking::UploadHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPLOADHANDLER_OFFSET))(this, a1);
		}

		::UnityEngine::Networking::UploadHandler* get_uploadHandler()
		{
			return ((::UnityEngine::Networking::UploadHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_UPLOADHANDLER_OFFSET))(this);
		}

		::System::Void set_uploadHandler(::UnityEngine::Networking::UploadHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::UploadHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_UPLOADHANDLER_OFFSET))(this, a1);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetDownloadHandler(::UnityEngine::Networking::DownloadHandler* a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::UnityEngine::Networking::DownloadHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETDOWNLOADHANDLER_OFFSET))(this, a1);
		}

		::UnityEngine::Networking::DownloadHandler* get_downloadHandler()
		{
			return ((::UnityEngine::Networking::DownloadHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DOWNLOADHANDLER_OFFSET))(this);
		}

		::System::Void set_downloadHandler(::UnityEngine::Networking::DownloadHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::DownloadHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DOWNLOADHANDLER_OFFSET))(this, a1);
		}

		::UnityEngine::Networking::CertificateHandler* get_certificateHandler()
		{
			return ((::UnityEngine::Networking::CertificateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_CERTIFICATEHANDLER_OFFSET))(this);
		}

		::System::Int32 GetTimeoutMsec()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETTIMEOUTMSEC_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetTimeoutMsec(::System::Int32 a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETTIMEOUTMSEC_OFFSET))(this, a1);
		}

		::System::Int32 get_timeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_TIMEOUT_OFFSET))(this);
		}

		::System::Void set_timeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_TIMEOUT_OFFSET))(this, a1);
		}

		static ::UnityEngine::Networking::UnityWebRequest* Get(::System::String* a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_OFFSET))(a1);
		}

		static ::UnityEngine::Networking::UnityWebRequest* Post(::System::String* a1, ::UnityEngine::WWWForm* a2)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::UnityEngine::WWWForm*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_OFFSET))(a1, a2);
		}

		static ::System::Void SetupPost(::UnityEngine::Networking::UnityWebRequest* a1, ::UnityEngine::WWWForm* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::UnityEngine::WWWForm*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPPOST_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Networking::UnityWebRequest* Post_1(::System::String* a1, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* a2)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Networking::UnityWebRequest* Post_2(::System::String* a1, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetupPost_1(::UnityEngine::Networking::UnityWebRequest* a1, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPPOST_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* EscapeURL(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ESCAPEURL_OFFSET))(a1);
		}

		static ::System::String* EscapeURL_1(::System::String* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ESCAPEURL_1_OFFSET))(a1, a2);
		}

		static ::System::String* UnEscapeURL(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_UNESCAPEURL_OFFSET))(a1);
		}

		static ::System::String* UnEscapeURL_1(::System::String* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_UNESCAPEURL_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* SerializeFormSections(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SERIALIZEFORMSECTIONS_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* GenerateBoundary()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GENERATEBOUNDARY_OFFSET))();
		}
	};
}
