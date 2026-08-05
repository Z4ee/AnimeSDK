#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class PageData; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class PageDataSplitter; }

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATASPLITTER_PAGEDATASPLITTER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F0E0C90)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATASPLITTER_PAGEDATASPLITTER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1F0E0CA0)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATASPLITTER_PAGEDATASPLITTER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1F0E0D70)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATASPLITTER_PAGEDATASPLITTER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0E0E60)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATASPLITTER_PAGEDATASPLITTER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0E0E20)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int PageDataSplitter_PageDataSplitter_UnityGeneratedFormatter_TypeDefinitionIndex = 33105;

	class PageDataSplitter_PageDataSplitter_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::UnityEngine::Timeline::Comic::DataSplitter::PageDataSplitter*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Timeline::Comic::DataSplitter::PageData*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Timeline::Comic::DataSplitter::PageData*>*>**)Il2CppClass::FromTypeDefinitionIndex(PageDataSplitter_PageDataSplitter_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x28020);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATASPLITTER_PAGEDATASPLITTER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATASPLITTER_PAGEDATASPLITTER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATASPLITTER_PAGEDATASPLITTER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::Timeline::Comic::DataSplitter::PageDataSplitter*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::Comic::DataSplitter::PageDataSplitter*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATASPLITTER_PAGEDATASPLITTER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::UnityEngine::Timeline::Comic::DataSplitter::PageDataSplitter*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::Comic::DataSplitter::PageDataSplitter*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATASPLITTER_PAGEDATASPLITTER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
