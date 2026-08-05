#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Comic { class AudioContent; }
namespace MoleMole::Comic { class ScreenSplitAnimAudioDataWrapper; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class PageData; }

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATA_PAGEDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F995110)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATA_PAGEDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1F995120)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATA_PAGEDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1F995800)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATA_PAGEDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F995C30)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATA_PAGEDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F995BF0)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int PageData_PageData_UnityGeneratedFormatter_TypeDefinitionIndex = 33103;

	class PageData_PageData_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::UnityEngine::Timeline::Comic::DataSplitter::PageData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PageData_PageData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x27FD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(PageData_PageData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x27FD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Single>*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(PageData_PageData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x27FE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PageData_PageData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x27FE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PageData_PageData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x27FF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Comic::AudioContent*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Comic::AudioContent*>*>**)Il2CppClass::FromTypeDefinitionIndex(PageData_PageData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x27FF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Comic::ScreenSplitAnimAudioDataWrapper*>*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Comic::ScreenSplitAnimAudioDataWrapper*>*>**)Il2CppClass::FromTypeDefinitionIndex(PageData_PageData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x28000);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATA_PAGEDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATA_PAGEDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATA_PAGEDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::Timeline::Comic::DataSplitter::PageData*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::Comic::DataSplitter::PageData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATA_PAGEDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::UnityEngine::Timeline::Comic::DataSplitter::PageData*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::Comic::DataSplitter::PageData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATA_PAGEDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
