#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_927C86CDC6E097B0;
class WaveFloatingProxy;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define WAVEFLOATING_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB9B1F70)
#define WAVEFLOATING__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B1FC0)
#define WAVEFLOATING___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB9B2070)

inline static constexpr unsigned int WaveFloating_TypeDefinitionIndex = 44233;

class WaveFloating : public ::RPG::Client::TAMonoPlugin_1<::Class_3_927C86CDC6E097B0*>
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* childrenRenders; // 0x30
	::WaveFloatingProxy* proxyObject; // 0x38
	::System::Int32 bufferId; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* clonedMeshed; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* clonedMaterials; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVEFLOATING__CTOR_OFFSET))(this);
	}

	::System::String* GetTickLodTemplateName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVEFLOATING_GETTICKLODTEMPLATENAME_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_GetTickLodTemplateName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVEFLOATING___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
	}
};
