#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class BGMPageInfo; }

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFO_BGMPAGEINFO_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1FC17690)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFO_BGMPAGEINFO_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1FC176A0)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFO_BGMPAGEINFO_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1FC17830)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFO_BGMPAGEINFO_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC17990)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFO_BGMPAGEINFO_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC17950)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int BGMPageInfo_BGMPageInfo_UnityGeneratedFormatter_TypeDefinitionIndex = 33096;

	class BGMPageInfo_BGMPageInfo_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::UnityEngine::Timeline::Comic::DataSplitter::BGMPageInfo*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BGMPageInfo_BGMPageInfo_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x28470);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(BGMPageInfo_BGMPageInfo_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x28478);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFO_BGMPAGEINFO_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFO_BGMPAGEINFO_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFO_BGMPAGEINFO_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::Timeline::Comic::DataSplitter::BGMPageInfo*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::Comic::DataSplitter::BGMPageInfo*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFO_BGMPAGEINFO_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::UnityEngine::Timeline::Comic::DataSplitter::BGMPageInfo*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::Comic::DataSplitter::BGMPageInfo*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFO_BGMPAGEINFO_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
