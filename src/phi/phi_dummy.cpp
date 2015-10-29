#include "phi_dummy.hpp"
#include "../registry.hpp"

using namespace Catena_Variants;

//Register the registrable with the Registry so it can be used by CatenaFactory
Registry<Phi_Dummy> regpdummy;

Phi_Dummy::Phi_Dummy()
:Registerable("Phi-Dummy", "PD", 
	"Dummy for Phi-Layer")
{}

void
Phi_Dummy::ResetState()
{}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
void 
Phi_Dummy::process(const uint8_t garlic, uint8_t *r, uint8_t* h)
{

}
#pragma GCC diagnostic pop
