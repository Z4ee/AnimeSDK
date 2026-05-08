#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::ComponentModel { class AsyncCompletedEventArgs; }
namespace System::ComponentModel { class AsyncCompletedEventHandler; }
namespace System::IO { class Stream; }
namespace System::Net { class DownloadDataCompletedEventArgs; }
namespace System::Net { class DownloadDataCompletedEventHandler; }
namespace System::Net { class DownloadStringCompletedEventArgs; }
namespace System::Net { class DownloadStringCompletedEventHandler; }
namespace System::Net { class OpenReadCompletedEventArgs; }
namespace System::Net { class OpenReadCompletedEventHandler; }
namespace System::Net { class OpenWriteCompletedEventArgs; }
namespace System::Net { class OpenWriteCompletedEventHandler; }
namespace System::Net { class UploadDataCompletedEventArgs; }
namespace System::Net { class UploadDataCompletedEventHandler; }
namespace System::Net { class UploadFileCompletedEventArgs; }
namespace System::Net { class UploadFileCompletedEventHandler; }
namespace System::Net { class UploadStringCompletedEventArgs; }
namespace System::Net { class UploadStringCompletedEventHandler; }
namespace System::Net { class UploadValuesCompletedEventArgs; }
namespace System::Net { class UploadValuesCompletedEventHandler; }
namespace System::Net { class WebClient; }

#define SYSTEM_NET_WEBCLIENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19235380)
#define SYSTEM_NET_WEBCLIENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x192353C0)
#define SYSTEM_NET_WEBCLIENT___C__DOWNLOADDATATASKASYNC_B__231_1_OFFSET UNITYSDK_OFFSET(0x192356D0)
#define SYSTEM_NET_WEBCLIENT___C__DOWNLOADDATATASKASYNC_B__231_2_OFFSET UNITYSDK_OFFSET(0x19235700)
#define SYSTEM_NET_WEBCLIENT___C__DOWNLOADFILETASKASYNC_B__233_1_OFFSET UNITYSDK_OFFSET(0x19235790)
#define SYSTEM_NET_WEBCLIENT___C__DOWNLOADFILETASKASYNC_B__233_2_OFFSET UNITYSDK_OFFSET(0x192357A0)
#define SYSTEM_NET_WEBCLIENT___C__DOWNLOADSTRINGTASKASYNC_B__219_1_OFFSET UNITYSDK_OFFSET(0x192353D0)
#define SYSTEM_NET_WEBCLIENT___C__DOWNLOADSTRINGTASKASYNC_B__219_2_OFFSET UNITYSDK_OFFSET(0x19235400)
#define SYSTEM_NET_WEBCLIENT___C__OPENREADTASKASYNC_B__221_1_OFFSET UNITYSDK_OFFSET(0x19235490)
#define SYSTEM_NET_WEBCLIENT___C__OPENREADTASKASYNC_B__221_2_OFFSET UNITYSDK_OFFSET(0x192354C0)
#define SYSTEM_NET_WEBCLIENT___C__OPENWRITETASKASYNC_B__225_1_OFFSET UNITYSDK_OFFSET(0x19235550)
#define SYSTEM_NET_WEBCLIENT___C__OPENWRITETASKASYNC_B__225_2_OFFSET UNITYSDK_OFFSET(0x19235580)
#define SYSTEM_NET_WEBCLIENT___C__UPLOADDATATASKASYNC_B__237_1_OFFSET UNITYSDK_OFFSET(0x19235830)
#define SYSTEM_NET_WEBCLIENT___C__UPLOADDATATASKASYNC_B__237_2_OFFSET UNITYSDK_OFFSET(0x19235860)
#define SYSTEM_NET_WEBCLIENT___C__UPLOADFILETASKASYNC_B__241_1_OFFSET UNITYSDK_OFFSET(0x192358F0)
#define SYSTEM_NET_WEBCLIENT___C__UPLOADFILETASKASYNC_B__241_2_OFFSET UNITYSDK_OFFSET(0x19235920)
#define SYSTEM_NET_WEBCLIENT___C__UPLOADSTRINGTASKASYNC_B__229_1_OFFSET UNITYSDK_OFFSET(0x19235610)
#define SYSTEM_NET_WEBCLIENT___C__UPLOADSTRINGTASKASYNC_B__229_2_OFFSET UNITYSDK_OFFSET(0x19235640)
#define SYSTEM_NET_WEBCLIENT___C__UPLOADVALUESTASKASYNC_B__245_1_OFFSET UNITYSDK_OFFSET(0x192359B0)
#define SYSTEM_NET_WEBCLIENT___C__UPLOADVALUESTASKASYNC_B__245_2_OFFSET UNITYSDK_OFFSET(0x192359E0)

namespace System::Net
{
	inline static constexpr unsigned int WebClient___c_TypeDefinitionIndex = 3448;

	class WebClient___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Net::UploadValuesCompletedEventArgs*, ::Il2CppArray<::System::Byte>*>** StaticGet___9__245_1()
		{
			return (::System::Func_2<::System::Net::UploadValuesCompletedEventArgs*, ::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x30B0);
		}
		static ::System::Action_2<::System::Net::WebClient*, ::System::Net::OpenReadCompletedEventHandler*>** StaticGet___9__221_2()
		{
			return (::System::Action_2<::System::Net::WebClient*, ::System::Net::OpenReadCompletedEventHandler*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x30B8);
		}
		static ::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadValuesCompletedEventHandler*>** StaticGet___9__245_2()
		{
			return (::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadValuesCompletedEventHandler*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x30C0);
		}
		static ::System::Func_2<::System::Net::UploadStringCompletedEventArgs*, ::System::String*>** StaticGet___9__229_1()
		{
			return (::System::Func_2<::System::Net::UploadStringCompletedEventArgs*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x30C8);
		}
		static ::System::Net::WebClient___c** StaticGet___9()
		{
			return (::System::Net::WebClient___c**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x30D0);
		}
		static ::System::Action_2<::System::Net::WebClient*, ::System::Net::DownloadStringCompletedEventHandler*>** StaticGet___9__219_2()
		{
			return (::System::Action_2<::System::Net::WebClient*, ::System::Net::DownloadStringCompletedEventHandler*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x30D8);
		}
		static ::System::Func_2<::System::Net::UploadFileCompletedEventArgs*, ::Il2CppArray<::System::Byte>*>** StaticGet___9__241_1()
		{
			return (::System::Func_2<::System::Net::UploadFileCompletedEventArgs*, ::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x30E0);
		}
		static ::System::Action_2<::System::Net::WebClient*, ::System::Net::DownloadDataCompletedEventHandler*>** StaticGet___9__231_2()
		{
			return (::System::Action_2<::System::Net::WebClient*, ::System::Net::DownloadDataCompletedEventHandler*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x30E8);
		}
		static ::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadDataCompletedEventHandler*>** StaticGet___9__237_2()
		{
			return (::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadDataCompletedEventHandler*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x30F0);
		}
		static ::System::Func_2<::System::ComponentModel::AsyncCompletedEventArgs*, ::System::Object*>** StaticGet___9__233_1()
		{
			return (::System::Func_2<::System::ComponentModel::AsyncCompletedEventArgs*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x30F8);
		}
		static ::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadFileCompletedEventHandler*>** StaticGet___9__241_2()
		{
			return (::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadFileCompletedEventHandler*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x3100);
		}
		static ::System::Action_2<::System::Net::WebClient*, ::System::ComponentModel::AsyncCompletedEventHandler*>** StaticGet___9__233_2()
		{
			return (::System::Action_2<::System::Net::WebClient*, ::System::ComponentModel::AsyncCompletedEventHandler*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x3108);
		}
		static ::System::Func_2<::System::Net::OpenWriteCompletedEventArgs*, ::System::IO::Stream*>** StaticGet___9__225_1()
		{
			return (::System::Func_2<::System::Net::OpenWriteCompletedEventArgs*, ::System::IO::Stream*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x3110);
		}
		static ::System::Func_2<::System::Net::DownloadStringCompletedEventArgs*, ::System::String*>** StaticGet___9__219_1()
		{
			return (::System::Func_2<::System::Net::DownloadStringCompletedEventArgs*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x3118);
		}
		static ::System::Action_2<::System::Net::WebClient*, ::System::Net::OpenWriteCompletedEventHandler*>** StaticGet___9__225_2()
		{
			return (::System::Action_2<::System::Net::WebClient*, ::System::Net::OpenWriteCompletedEventHandler*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x3120);
		}
		static ::System::Func_2<::System::Net::DownloadDataCompletedEventArgs*, ::Il2CppArray<::System::Byte>*>** StaticGet___9__231_1()
		{
			return (::System::Func_2<::System::Net::DownloadDataCompletedEventArgs*, ::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x3128);
		}
		static ::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadStringCompletedEventHandler*>** StaticGet___9__229_2()
		{
			return (::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadStringCompletedEventHandler*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x3130);
		}
		static ::System::Func_2<::System::Net::UploadDataCompletedEventArgs*, ::Il2CppArray<::System::Byte>*>** StaticGet___9__237_1()
		{
			return (::System::Func_2<::System::Net::UploadDataCompletedEventArgs*, ::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x3138);
		}
		static ::System::Func_2<::System::Net::OpenReadCompletedEventArgs*, ::System::IO::Stream*>** StaticGet___9__221_1()
		{
			return (::System::Func_2<::System::Net::OpenReadCompletedEventArgs*, ::System::IO::Stream*>**)Il2CppClass::FromTypeDefinitionIndex(WebClient___c_TypeDefinitionIndex)->GetStaticField(0x3140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__CTOR_OFFSET))(this);
		}

		::System::String* _DownloadStringTaskAsync_b__219_1(::System::Net::DownloadStringCompletedEventArgs* args)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::DownloadStringCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DOWNLOADSTRINGTASKASYNC_B__219_1_OFFSET))(this, args);
		}

		::System::Void _DownloadStringTaskAsync_b__219_2(::System::Net::WebClient* webClient, ::System::Net::DownloadStringCompletedEventHandler* completion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebClient*, ::System::Net::DownloadStringCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DOWNLOADSTRINGTASKASYNC_B__219_2_OFFSET))(this, webClient, completion);
		}

		::System::IO::Stream* _OpenReadTaskAsync_b__221_1(::System::Net::OpenReadCompletedEventArgs* args)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Net::OpenReadCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__OPENREADTASKASYNC_B__221_1_OFFSET))(this, args);
		}

		::System::Void _OpenReadTaskAsync_b__221_2(::System::Net::WebClient* webClient, ::System::Net::OpenReadCompletedEventHandler* completion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebClient*, ::System::Net::OpenReadCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__OPENREADTASKASYNC_B__221_2_OFFSET))(this, webClient, completion);
		}

		::System::IO::Stream* _OpenWriteTaskAsync_b__225_1(::System::Net::OpenWriteCompletedEventArgs* args)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Net::OpenWriteCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__OPENWRITETASKASYNC_B__225_1_OFFSET))(this, args);
		}

		::System::Void _OpenWriteTaskAsync_b__225_2(::System::Net::WebClient* webClient, ::System::Net::OpenWriteCompletedEventHandler* completion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebClient*, ::System::Net::OpenWriteCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__OPENWRITETASKASYNC_B__225_2_OFFSET))(this, webClient, completion);
		}

		::System::String* _UploadStringTaskAsync_b__229_1(::System::Net::UploadStringCompletedEventArgs* args)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::UploadStringCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__UPLOADSTRINGTASKASYNC_B__229_1_OFFSET))(this, args);
		}

		::System::Void _UploadStringTaskAsync_b__229_2(::System::Net::WebClient* webClient, ::System::Net::UploadStringCompletedEventHandler* completion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebClient*, ::System::Net::UploadStringCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__UPLOADSTRINGTASKASYNC_B__229_2_OFFSET))(this, webClient, completion);
		}

		::Il2CppArray<::System::Byte>* _DownloadDataTaskAsync_b__231_1(::System::Net::DownloadDataCompletedEventArgs* args)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Net::DownloadDataCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DOWNLOADDATATASKASYNC_B__231_1_OFFSET))(this, args);
		}

		::System::Void _DownloadDataTaskAsync_b__231_2(::System::Net::WebClient* webClient, ::System::Net::DownloadDataCompletedEventHandler* completion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebClient*, ::System::Net::DownloadDataCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DOWNLOADDATATASKASYNC_B__231_2_OFFSET))(this, webClient, completion);
		}

		::System::Object* _DownloadFileTaskAsync_b__233_1(::System::ComponentModel::AsyncCompletedEventArgs* args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::AsyncCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DOWNLOADFILETASKASYNC_B__233_1_OFFSET))(this, args);
		}

		::System::Void _DownloadFileTaskAsync_b__233_2(::System::Net::WebClient* webClient, ::System::ComponentModel::AsyncCompletedEventHandler* completion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebClient*, ::System::ComponentModel::AsyncCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DOWNLOADFILETASKASYNC_B__233_2_OFFSET))(this, webClient, completion);
		}

		::Il2CppArray<::System::Byte>* _UploadDataTaskAsync_b__237_1(::System::Net::UploadDataCompletedEventArgs* args)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Net::UploadDataCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__UPLOADDATATASKASYNC_B__237_1_OFFSET))(this, args);
		}

		::System::Void _UploadDataTaskAsync_b__237_2(::System::Net::WebClient* webClient, ::System::Net::UploadDataCompletedEventHandler* completion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebClient*, ::System::Net::UploadDataCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__UPLOADDATATASKASYNC_B__237_2_OFFSET))(this, webClient, completion);
		}

		::Il2CppArray<::System::Byte>* _UploadFileTaskAsync_b__241_1(::System::Net::UploadFileCompletedEventArgs* args)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Net::UploadFileCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__UPLOADFILETASKASYNC_B__241_1_OFFSET))(this, args);
		}

		::System::Void _UploadFileTaskAsync_b__241_2(::System::Net::WebClient* webClient, ::System::Net::UploadFileCompletedEventHandler* completion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebClient*, ::System::Net::UploadFileCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__UPLOADFILETASKASYNC_B__241_2_OFFSET))(this, webClient, completion);
		}

		::Il2CppArray<::System::Byte>* _UploadValuesTaskAsync_b__245_1(::System::Net::UploadValuesCompletedEventArgs* args)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Net::UploadValuesCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__UPLOADVALUESTASKASYNC_B__245_1_OFFSET))(this, args);
		}

		::System::Void _UploadValuesTaskAsync_b__245_2(::System::Net::WebClient* webClient, ::System::Net::UploadValuesCompletedEventHandler* completion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebClient*, ::System::Net::UploadValuesCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__UPLOADVALUESTASKASYNC_B__245_2_OFFSET))(this, webClient, completion);
		}
	};
}
