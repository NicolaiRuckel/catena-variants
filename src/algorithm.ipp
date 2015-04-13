template <typename Derived>
AbstractAlgorithm* 
Algorithm<Derived>::clone() const{
	return new Derived(static_cast<Derived const&>(*this));
}

template <typename Derived>
void 
Algorithm<Derived>::setFullHash(AHFUsptr h){
	_hashfull = h;
	if(_graph){
		_graph->setFullHash(h);
	}
	if(_randomlayer){
		_randomlayer->setFullHash(h);
	}
}

template <typename Derived>
void 
Algorithm<Derived>::setHashFast(AHFAsptr h){
	_hashfast = h;
	if(_graph){
		_graph->setHashFast(h);
	}
	if(_randomlayer){
		_randomlayer->setHashFast(h);
	}
}

template <typename Derived>
void 
Algorithm<Derived>::setGraph(AGsptr g) {
	_graph = g;
}

template <typename Derived>
void 
Algorithm<Derived>::setRandomLayer(ARLsptr r){
	_randomlayer = r;
}

template <typename Derived>
const uint8_t* 
Algorithm<Derived>::getDefaultVersionID() const
{
	return _graph->getDefaultVersionID();
}


template <typename Derived>
uint8_t 
Algorithm<Derived>::getDefaultLambda()const
{
	return _graph->getDefaultLambda();
}

template <typename Derived>
uint8_t 
Algorithm<Derived>::getDefaultGarlic()const
{
	return _graph->getDefaultGarlic();
}

template <typename Derived>
uint8_t 
Algorithm<Derived>::getDefaulMinGarlic()const
{
	return _graph->getDefaulMinGarlic();
}